<template>
  <section class="panel-23701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23701");
const base = ref(23701);
const total = computed(() => base.value * 2);

function incrementar23701() {
  base.value++;
}
</script>
