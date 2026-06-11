<template>
  <section class="panel-49321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49321");
const base = ref(49321);
const total = computed(() => base.value * 2);

function incrementar49321() {
  base.value++;
}
</script>
