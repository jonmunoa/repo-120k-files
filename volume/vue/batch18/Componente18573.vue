<template>
  <section class="panel-18573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18573");
const base = ref(18573);
const total = computed(() => base.value * 2);

function incrementar18573() {
  base.value++;
}
</script>
