<template>
  <section class="panel-37805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37805");
const base = ref(37805);
const total = computed(() => base.value * 2);

function incrementar37805() {
  base.value++;
}
</script>
