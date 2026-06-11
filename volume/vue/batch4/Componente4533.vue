<template>
  <section class="panel-4533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4533");
const base = ref(4533);
const total = computed(() => base.value * 2);

function incrementar4533() {
  base.value++;
}
</script>
