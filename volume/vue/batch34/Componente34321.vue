<template>
  <section class="panel-34321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34321");
const base = ref(34321);
const total = computed(() => base.value * 2);

function incrementar34321() {
  base.value++;
}
</script>
