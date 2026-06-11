<template>
  <section class="panel-44805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44805");
const base = ref(44805);
const total = computed(() => base.value * 2);

function incrementar44805() {
  base.value++;
}
</script>
