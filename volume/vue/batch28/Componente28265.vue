<template>
  <section class="panel-28265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28265");
const base = ref(28265);
const total = computed(() => base.value * 2);

function incrementar28265() {
  base.value++;
}
</script>
