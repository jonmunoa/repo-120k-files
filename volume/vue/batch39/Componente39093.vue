<template>
  <section class="panel-39093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39093");
const base = ref(39093);
const total = computed(() => base.value * 2);

function incrementar39093() {
  base.value++;
}
</script>
