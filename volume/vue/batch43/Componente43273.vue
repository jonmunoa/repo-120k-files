<template>
  <section class="panel-43273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43273");
const base = ref(43273);
const total = computed(() => base.value * 2);

function incrementar43273() {
  base.value++;
}
</script>
