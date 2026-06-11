<template>
  <section class="panel-43921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43921");
const base = ref(43921);
const total = computed(() => base.value * 2);

function incrementar43921() {
  base.value++;
}
</script>
