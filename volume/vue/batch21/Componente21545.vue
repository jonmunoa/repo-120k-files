<template>
  <section class="panel-21545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21545");
const base = ref(21545);
const total = computed(() => base.value * 2);

function incrementar21545() {
  base.value++;
}
</script>
