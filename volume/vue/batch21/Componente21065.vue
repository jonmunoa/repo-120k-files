<template>
  <section class="panel-21065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21065");
const base = ref(21065);
const total = computed(() => base.value * 2);

function incrementar21065() {
  base.value++;
}
</script>
