<template>
  <section class="panel-21321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21321");
const base = ref(21321);
const total = computed(() => base.value * 2);

function incrementar21321() {
  base.value++;
}
</script>
