<template>
  <section class="panel-15569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15569");
const base = ref(15569);
const total = computed(() => base.value * 2);

function incrementar15569() {
  base.value++;
}
</script>
