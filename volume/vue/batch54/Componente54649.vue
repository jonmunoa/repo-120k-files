<template>
  <section class="panel-54649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54649");
const base = ref(54649);
const total = computed(() => base.value * 2);

function incrementar54649() {
  base.value++;
}
</script>
