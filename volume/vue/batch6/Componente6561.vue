<template>
  <section class="panel-6561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6561");
const base = ref(6561);
const total = computed(() => base.value * 2);

function incrementar6561() {
  base.value++;
}
</script>
