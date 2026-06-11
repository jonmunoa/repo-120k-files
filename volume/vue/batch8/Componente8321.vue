<template>
  <section class="panel-8321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8321");
const base = ref(8321);
const total = computed(() => base.value * 2);

function incrementar8321() {
  base.value++;
}
</script>
