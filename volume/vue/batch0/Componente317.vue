<template>
  <section class="panel-317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 317");
const base = ref(317);
const total = computed(() => base.value * 2);

function incrementar317() {
  base.value++;
}
</script>
