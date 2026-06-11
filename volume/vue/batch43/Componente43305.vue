<template>
  <section class="panel-43305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43305");
const base = ref(43305);
const total = computed(() => base.value * 2);

function incrementar43305() {
  base.value++;
}
</script>
