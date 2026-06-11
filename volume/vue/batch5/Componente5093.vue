<template>
  <section class="panel-5093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5093");
const base = ref(5093);
const total = computed(() => base.value * 2);

function incrementar5093() {
  base.value++;
}
</script>
