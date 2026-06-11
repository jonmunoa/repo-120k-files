<template>
  <section class="panel-16765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16765");
const base = ref(16765);
const total = computed(() => base.value * 2);

function incrementar16765() {
  base.value++;
}
</script>
