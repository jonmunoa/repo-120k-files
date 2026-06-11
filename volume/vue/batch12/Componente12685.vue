<template>
  <section class="panel-12685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12685");
const base = ref(12685);
const total = computed(() => base.value * 2);

function incrementar12685() {
  base.value++;
}
</script>
