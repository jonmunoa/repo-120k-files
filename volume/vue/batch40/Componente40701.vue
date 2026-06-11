<template>
  <section class="panel-40701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40701");
const base = ref(40701);
const total = computed(() => base.value * 2);

function incrementar40701() {
  base.value++;
}
</script>
