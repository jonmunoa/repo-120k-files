<template>
  <section class="panel-9757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9757");
const base = ref(9757);
const total = computed(() => base.value * 2);

function incrementar9757() {
  base.value++;
}
</script>
