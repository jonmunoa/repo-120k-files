<template>
  <section class="panel-34093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34093");
const base = ref(34093);
const total = computed(() => base.value * 2);

function incrementar34093() {
  base.value++;
}
</script>
