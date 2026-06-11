<template>
  <section class="panel-12145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12145");
const base = ref(12145);
const total = computed(() => base.value * 2);

function incrementar12145() {
  base.value++;
}
</script>
