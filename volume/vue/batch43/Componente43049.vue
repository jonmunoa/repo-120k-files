<template>
  <section class="panel-43049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43049");
const base = ref(43049);
const total = computed(() => base.value * 2);

function incrementar43049() {
  base.value++;
}
</script>
