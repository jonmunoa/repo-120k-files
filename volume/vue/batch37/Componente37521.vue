<template>
  <section class="panel-37521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37521");
const base = ref(37521);
const total = computed(() => base.value * 2);

function incrementar37521() {
  base.value++;
}
</script>
