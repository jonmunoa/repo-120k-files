<template>
  <section class="panel-34681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34681");
const base = ref(34681);
const total = computed(() => base.value * 2);

function incrementar34681() {
  base.value++;
}
</script>
