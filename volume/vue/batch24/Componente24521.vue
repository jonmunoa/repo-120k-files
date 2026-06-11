<template>
  <section class="panel-24521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24521");
const base = ref(24521);
const total = computed(() => base.value * 2);

function incrementar24521() {
  base.value++;
}
</script>
