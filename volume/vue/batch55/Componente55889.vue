<template>
  <section class="panel-55889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55889");
const base = ref(55889);
const total = computed(() => base.value * 2);

function incrementar55889() {
  base.value++;
}
</script>
