<template>
  <section class="panel-43117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43117");
const base = ref(43117);
const total = computed(() => base.value * 2);

function incrementar43117() {
  base.value++;
}
</script>
