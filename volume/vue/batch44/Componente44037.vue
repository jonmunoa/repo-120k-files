<template>
  <section class="panel-44037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44037");
const base = ref(44037);
const total = computed(() => base.value * 2);

function incrementar44037() {
  base.value++;
}
</script>
