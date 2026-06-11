<template>
  <section class="panel-5813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5813");
const base = ref(5813);
const total = computed(() => base.value * 2);

function incrementar5813() {
  base.value++;
}
</script>
