<template>
  <section class="panel-50757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50757");
const base = ref(50757);
const total = computed(() => base.value * 2);

function incrementar50757() {
  base.value++;
}
</script>
