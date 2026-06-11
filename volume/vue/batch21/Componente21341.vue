<template>
  <section class="panel-21341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21341");
const base = ref(21341);
const total = computed(() => base.value * 2);

function incrementar21341() {
  base.value++;
}
</script>
