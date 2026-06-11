<template>
  <section class="panel-20757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20757");
const base = ref(20757);
const total = computed(() => base.value * 2);

function incrementar20757() {
  base.value++;
}
</script>
