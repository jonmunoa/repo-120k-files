<template>
  <section class="panel-34765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34765");
const base = ref(34765);
const total = computed(() => base.value * 2);

function incrementar34765() {
  base.value++;
}
</script>
