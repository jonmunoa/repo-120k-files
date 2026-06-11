<template>
  <section class="panel-56465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56465");
const base = ref(56465);
const total = computed(() => base.value * 2);

function incrementar56465() {
  base.value++;
}
</script>
