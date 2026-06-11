<template>
  <section class="panel-2513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2513");
const base = ref(2513);
const total = computed(() => base.value * 2);

function incrementar2513() {
  base.value++;
}
</script>
