<template>
  <section class="panel-41061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41061");
const base = ref(41061);
const total = computed(() => base.value * 2);

function incrementar41061() {
  base.value++;
}
</script>
