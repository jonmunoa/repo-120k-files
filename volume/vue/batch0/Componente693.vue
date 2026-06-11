<template>
  <section class="panel-693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 693");
const base = ref(693);
const total = computed(() => base.value * 2);

function incrementar693() {
  base.value++;
}
</script>
