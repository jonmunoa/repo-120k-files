<template>
  <section class="panel-19221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19221");
const base = ref(19221);
const total = computed(() => base.value * 2);

function incrementar19221() {
  base.value++;
}
</script>
