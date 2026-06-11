<template>
  <section class="panel-21329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21329");
const base = ref(21329);
const total = computed(() => base.value * 2);

function incrementar21329() {
  base.value++;
}
</script>
