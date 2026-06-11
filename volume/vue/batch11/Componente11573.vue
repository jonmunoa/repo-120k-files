<template>
  <section class="panel-11573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11573");
const base = ref(11573);
const total = computed(() => base.value * 2);

function incrementar11573() {
  base.value++;
}
</script>
