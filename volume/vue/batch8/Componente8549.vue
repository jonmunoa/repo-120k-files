<template>
  <section class="panel-8549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8549");
const base = ref(8549);
const total = computed(() => base.value * 2);

function incrementar8549() {
  base.value++;
}
</script>
