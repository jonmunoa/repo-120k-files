<template>
  <section class="panel-33545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33545");
const base = ref(33545);
const total = computed(() => base.value * 2);

function incrementar33545() {
  base.value++;
}
</script>
