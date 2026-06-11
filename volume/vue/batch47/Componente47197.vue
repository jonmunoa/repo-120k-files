<template>
  <section class="panel-47197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47197");
const base = ref(47197);
const total = computed(() => base.value * 2);

function incrementar47197() {
  base.value++;
}
</script>
