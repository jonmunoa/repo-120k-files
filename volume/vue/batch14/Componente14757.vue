<template>
  <section class="panel-14757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14757");
const base = ref(14757);
const total = computed(() => base.value * 2);

function incrementar14757() {
  base.value++;
}
</script>
