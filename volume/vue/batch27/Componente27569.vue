<template>
  <section class="panel-27569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27569");
const base = ref(27569);
const total = computed(() => base.value * 2);

function incrementar27569() {
  base.value++;
}
</script>
