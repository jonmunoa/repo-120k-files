<template>
  <section class="panel-36521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36521");
const base = ref(36521);
const total = computed(() => base.value * 2);

function incrementar36521() {
  base.value++;
}
</script>
