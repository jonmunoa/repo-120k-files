<template>
  <section class="panel-41321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41321");
const base = ref(41321);
const total = computed(() => base.value * 2);

function incrementar41321() {
  base.value++;
}
</script>
