<template>
  <section class="panel-29321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29321");
const base = ref(29321);
const total = computed(() => base.value * 2);

function incrementar29321() {
  base.value++;
}
</script>
