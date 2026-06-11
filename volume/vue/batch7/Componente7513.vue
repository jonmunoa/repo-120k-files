<template>
  <section class="panel-7513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7513");
const base = ref(7513);
const total = computed(() => base.value * 2);

function incrementar7513() {
  base.value++;
}
</script>
