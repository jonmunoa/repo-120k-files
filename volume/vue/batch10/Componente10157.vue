<template>
  <section class="panel-10157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10157");
const base = ref(10157);
const total = computed(() => base.value * 2);

function incrementar10157() {
  base.value++;
}
</script>
