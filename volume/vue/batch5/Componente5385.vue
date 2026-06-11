<template>
  <section class="panel-5385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5385");
const base = ref(5385);
const total = computed(() => base.value * 2);

function incrementar5385() {
  base.value++;
}
</script>
