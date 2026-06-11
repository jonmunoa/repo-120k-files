<template>
  <section class="panel-12353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12353");
const base = ref(12353);
const total = computed(() => base.value * 2);

function incrementar12353() {
  base.value++;
}
</script>
