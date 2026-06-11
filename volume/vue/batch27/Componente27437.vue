<template>
  <section class="panel-27437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27437");
const base = ref(27437);
const total = computed(() => base.value * 2);

function incrementar27437() {
  base.value++;
}
</script>
