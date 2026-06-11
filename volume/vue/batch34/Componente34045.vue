<template>
  <section class="panel-34045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34045");
const base = ref(34045);
const total = computed(() => base.value * 2);

function incrementar34045() {
  base.value++;
}
</script>
