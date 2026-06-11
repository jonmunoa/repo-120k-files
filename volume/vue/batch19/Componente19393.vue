<template>
  <section class="panel-19393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19393");
const base = ref(19393);
const total = computed(() => base.value * 2);

function incrementar19393() {
  base.value++;
}
</script>
