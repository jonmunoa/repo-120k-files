<template>
  <section class="panel-12501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12501");
const base = ref(12501);
const total = computed(() => base.value * 2);

function incrementar12501() {
  base.value++;
}
</script>
