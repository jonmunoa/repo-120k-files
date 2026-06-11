<template>
  <section class="panel-12657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12657");
const base = ref(12657);
const total = computed(() => base.value * 2);

function incrementar12657() {
  base.value++;
}
</script>
