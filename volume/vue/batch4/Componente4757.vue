<template>
  <section class="panel-4757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4757");
const base = ref(4757);
const total = computed(() => base.value * 2);

function incrementar4757() {
  base.value++;
}
</script>
