<template>
  <section class="panel-24805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24805");
const base = ref(24805);
const total = computed(() => base.value * 2);

function incrementar24805() {
  base.value++;
}
</script>
