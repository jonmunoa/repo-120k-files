<template>
  <section class="panel-17197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17197");
const base = ref(17197);
const total = computed(() => base.value * 2);

function incrementar17197() {
  base.value++;
}
</script>
