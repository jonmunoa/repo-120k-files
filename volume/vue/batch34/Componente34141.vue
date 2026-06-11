<template>
  <section class="panel-34141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34141");
const base = ref(34141);
const total = computed(() => base.value * 2);

function incrementar34141() {
  base.value++;
}
</script>
