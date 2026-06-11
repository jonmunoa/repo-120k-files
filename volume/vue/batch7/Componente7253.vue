<template>
  <section class="panel-7253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7253");
const base = ref(7253);
const total = computed(() => base.value * 2);

function incrementar7253() {
  base.value++;
}
</script>
