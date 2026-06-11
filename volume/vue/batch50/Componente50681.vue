<template>
  <section class="panel-50681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50681");
const base = ref(50681);
const total = computed(() => base.value * 2);

function incrementar50681() {
  base.value++;
}
</script>
