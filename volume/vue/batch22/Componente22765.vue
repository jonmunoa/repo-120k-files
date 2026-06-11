<template>
  <section class="panel-22765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22765");
const base = ref(22765);
const total = computed(() => base.value * 2);

function incrementar22765() {
  base.value++;
}
</script>
