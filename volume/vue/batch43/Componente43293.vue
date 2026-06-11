<template>
  <section class="panel-43293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43293");
const base = ref(43293);
const total = computed(() => base.value * 2);

function incrementar43293() {
  base.value++;
}
</script>
