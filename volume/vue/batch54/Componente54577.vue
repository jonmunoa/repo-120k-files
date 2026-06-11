<template>
  <section class="panel-54577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54577");
const base = ref(54577);
const total = computed(() => base.value * 2);

function incrementar54577() {
  base.value++;
}
</script>
