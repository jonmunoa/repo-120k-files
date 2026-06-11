<template>
  <section class="panel-34481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34481");
const base = ref(34481);
const total = computed(() => base.value * 2);

function incrementar34481() {
  base.value++;
}
</script>
