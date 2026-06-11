<template>
  <section class="panel-33321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33321");
const base = ref(33321);
const total = computed(() => base.value * 2);

function incrementar33321() {
  base.value++;
}
</script>
