<template>
  <section class="panel-12765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12765");
const base = ref(12765);
const total = computed(() => base.value * 2);

function incrementar12765() {
  base.value++;
}
</script>
