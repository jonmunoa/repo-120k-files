<template>
  <section class="panel-19681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19681");
const base = ref(19681);
const total = computed(() => base.value * 2);

function incrementar19681() {
  base.value++;
}
</script>
