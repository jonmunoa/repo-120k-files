<template>
  <section class="panel-9813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9813");
const base = ref(9813);
const total = computed(() => base.value * 2);

function incrementar9813() {
  base.value++;
}
</script>
