<template>
  <section class="panel-10321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10321");
const base = ref(10321);
const total = computed(() => base.value * 2);

function incrementar10321() {
  base.value++;
}
</script>
