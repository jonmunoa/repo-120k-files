<template>
  <section class="panel-43037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43037");
const base = ref(43037);
const total = computed(() => base.value * 2);

function incrementar43037() {
  base.value++;
}
</script>
