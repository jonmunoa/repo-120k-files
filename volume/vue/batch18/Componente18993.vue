<template>
  <section class="panel-18993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18993");
const base = ref(18993);
const total = computed(() => base.value * 2);

function incrementar18993() {
  base.value++;
}
</script>
