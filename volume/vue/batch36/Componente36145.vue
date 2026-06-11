<template>
  <section class="panel-36145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36145");
const base = ref(36145);
const total = computed(() => base.value * 2);

function incrementar36145() {
  base.value++;
}
</script>
