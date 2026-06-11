<template>
  <section class="panel-27513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27513");
const base = ref(27513);
const total = computed(() => base.value * 2);

function incrementar27513() {
  base.value++;
}
</script>
