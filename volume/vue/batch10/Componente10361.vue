<template>
  <section class="panel-10361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10361");
const base = ref(10361);
const total = computed(() => base.value * 2);

function incrementar10361() {
  base.value++;
}
</script>
