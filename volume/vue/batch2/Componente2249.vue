<template>
  <section class="panel-2249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2249");
const base = ref(2249);
const total = computed(() => base.value * 2);

function incrementar2249() {
  base.value++;
}
</script>
