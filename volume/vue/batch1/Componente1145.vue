<template>
  <section class="panel-1145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1145");
const base = ref(1145);
const total = computed(() => base.value * 2);

function incrementar1145() {
  base.value++;
}
</script>
