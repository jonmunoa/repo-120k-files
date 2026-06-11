<template>
  <section class="panel-16037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16037");
const base = ref(16037);
const total = computed(() => base.value * 2);

function incrementar16037() {
  base.value++;
}
</script>
