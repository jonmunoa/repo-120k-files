<template>
  <section class="panel-17141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17141");
const base = ref(17141);
const total = computed(() => base.value * 2);

function incrementar17141() {
  base.value++;
}
</script>
