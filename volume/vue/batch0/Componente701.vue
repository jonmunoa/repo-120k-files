<template>
  <section class="panel-701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 701");
const base = ref(701);
const total = computed(() => base.value * 2);

function incrementar701() {
  base.value++;
}
</script>
