<template>
  <section class="panel-41393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41393");
const base = ref(41393);
const total = computed(() => base.value * 2);

function incrementar41393() {
  base.value++;
}
</script>
