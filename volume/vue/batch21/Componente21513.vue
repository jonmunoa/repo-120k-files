<template>
  <section class="panel-21513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21513");
const base = ref(21513);
const total = computed(() => base.value * 2);

function incrementar21513() {
  base.value++;
}
</script>
