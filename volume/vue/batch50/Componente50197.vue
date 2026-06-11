<template>
  <section class="panel-50197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50197");
const base = ref(50197);
const total = computed(() => base.value * 2);

function incrementar50197() {
  base.value++;
}
</script>
