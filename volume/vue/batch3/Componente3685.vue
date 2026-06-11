<template>
  <section class="panel-3685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3685");
const base = ref(3685);
const total = computed(() => base.value * 2);

function incrementar3685() {
  base.value++;
}
</script>
