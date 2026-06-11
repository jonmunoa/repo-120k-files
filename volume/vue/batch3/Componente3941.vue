<template>
  <section class="panel-3941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3941");
const base = ref(3941);
const total = computed(() => base.value * 2);

function incrementar3941() {
  base.value++;
}
</script>
