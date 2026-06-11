<template>
  <section class="panel-5321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5321");
const base = ref(5321);
const total = computed(() => base.value * 2);

function incrementar5321() {
  base.value++;
}
</script>
