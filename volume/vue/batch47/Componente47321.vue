<template>
  <section class="panel-47321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47321");
const base = ref(47321);
const total = computed(() => base.value * 2);

function incrementar47321() {
  base.value++;
}
</script>
