<template>
  <section class="panel-21045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21045");
const base = ref(21045);
const total = computed(() => base.value * 2);

function incrementar21045() {
  base.value++;
}
</script>
