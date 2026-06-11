<template>
  <section class="panel-5145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5145");
const base = ref(5145);
const total = computed(() => base.value * 2);

function incrementar5145() {
  base.value++;
}
</script>
