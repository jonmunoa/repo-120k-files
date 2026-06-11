<template>
  <section class="panel-30757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30757");
const base = ref(30757);
const total = computed(() => base.value * 2);

function incrementar30757() {
  base.value++;
}
</script>
