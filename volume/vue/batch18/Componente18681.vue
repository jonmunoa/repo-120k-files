<template>
  <section class="panel-18681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18681");
const base = ref(18681);
const total = computed(() => base.value * 2);

function incrementar18681() {
  base.value++;
}
</script>
