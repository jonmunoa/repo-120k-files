<template>
  <section class="panel-11321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11321");
const base = ref(11321);
const total = computed(() => base.value * 2);

function incrementar11321() {
  base.value++;
}
</script>
