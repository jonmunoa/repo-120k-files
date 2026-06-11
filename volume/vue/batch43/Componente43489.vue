<template>
  <section class="panel-43489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43489");
const base = ref(43489);
const total = computed(() => base.value * 2);

function incrementar43489() {
  base.value++;
}
</script>
