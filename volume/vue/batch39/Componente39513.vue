<template>
  <section class="panel-39513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39513");
const base = ref(39513);
const total = computed(() => base.value * 2);

function incrementar39513() {
  base.value++;
}
</script>
