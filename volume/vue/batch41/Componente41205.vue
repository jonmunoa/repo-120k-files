<template>
  <section class="panel-41205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41205");
const base = ref(41205);
const total = computed(() => base.value * 2);

function incrementar41205() {
  base.value++;
}
</script>
