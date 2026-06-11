<template>
  <section class="panel-43653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43653");
const base = ref(43653);
const total = computed(() => base.value * 2);

function incrementar43653() {
  base.value++;
}
</script>
