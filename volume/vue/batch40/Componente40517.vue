<template>
  <section class="panel-40517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40517");
const base = ref(40517);
const total = computed(() => base.value * 2);

function incrementar40517() {
  base.value++;
}
</script>
