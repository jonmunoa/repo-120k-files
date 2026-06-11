<template>
  <section class="panel-949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 949");
const base = ref(949);
const total = computed(() => base.value * 2);

function incrementar949() {
  base.value++;
}
</script>
