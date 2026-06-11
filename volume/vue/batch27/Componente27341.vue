<template>
  <section class="panel-27341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27341");
const base = ref(27341);
const total = computed(() => base.value * 2);

function incrementar27341() {
  base.value++;
}
</script>
