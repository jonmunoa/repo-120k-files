<template>
  <section class="panel-52757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52757");
const base = ref(52757);
const total = computed(() => base.value * 2);

function incrementar52757() {
  base.value++;
}
</script>
