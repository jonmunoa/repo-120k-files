<template>
  <section class="panel-9765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9765");
const base = ref(9765);
const total = computed(() => base.value * 2);

function incrementar9765() {
  base.value++;
}
</script>
