<template>
  <section class="panel-31757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31757");
const base = ref(31757);
const total = computed(() => base.value * 2);

function incrementar31757() {
  base.value++;
}
</script>
