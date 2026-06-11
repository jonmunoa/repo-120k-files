<template>
  <section class="panel-15561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15561");
const base = ref(15561);
const total = computed(() => base.value * 2);

function incrementar15561() {
  base.value++;
}
</script>
