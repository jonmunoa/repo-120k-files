<template>
  <section class="panel-10197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10197");
const base = ref(10197);
const total = computed(() => base.value * 2);

function incrementar10197() {
  base.value++;
}
</script>
