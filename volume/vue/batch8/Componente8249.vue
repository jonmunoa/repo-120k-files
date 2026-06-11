<template>
  <section class="panel-8249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8249");
const base = ref(8249);
const total = computed(() => base.value * 2);

function incrementar8249() {
  base.value++;
}
</script>
