<template>
  <section class="panel-56197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56197");
const base = ref(56197);
const total = computed(() => base.value * 2);

function incrementar56197() {
  base.value++;
}
</script>
