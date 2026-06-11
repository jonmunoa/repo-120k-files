<template>
  <section class="panel-57453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57453");
const base = ref(57453);
const total = computed(() => base.value * 2);

function incrementar57453() {
  base.value++;
}
</script>
