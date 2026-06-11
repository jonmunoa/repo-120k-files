<template>
  <section class="panel-54881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54881");
const base = ref(54881);
const total = computed(() => base.value * 2);

function incrementar54881() {
  base.value++;
}
</script>
