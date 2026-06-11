<template>
  <section class="panel-8137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8137");
const base = ref(8137);
const total = computed(() => base.value * 2);

function incrementar8137() {
  base.value++;
}
</script>
