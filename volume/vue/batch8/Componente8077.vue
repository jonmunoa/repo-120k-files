<template>
  <section class="panel-8077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8077");
const base = ref(8077);
const total = computed(() => base.value * 2);

function incrementar8077() {
  base.value++;
}
</script>
