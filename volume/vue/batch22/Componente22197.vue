<template>
  <section class="panel-22197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22197");
const base = ref(22197);
const total = computed(() => base.value * 2);

function incrementar22197() {
  base.value++;
}
</script>
