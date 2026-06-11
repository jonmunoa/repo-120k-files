<template>
  <section class="panel-25757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25757");
const base = ref(25757);
const total = computed(() => base.value * 2);

function incrementar25757() {
  base.value++;
}
</script>
