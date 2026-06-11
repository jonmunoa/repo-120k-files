<template>
  <section class="panel-21057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21057");
const base = ref(21057);
const total = computed(() => base.value * 2);

function incrementar21057() {
  base.value++;
}
</script>
