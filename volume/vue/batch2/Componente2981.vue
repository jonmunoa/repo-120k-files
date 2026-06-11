<template>
  <section class="panel-2981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2981");
const base = ref(2981);
const total = computed(() => base.value * 2);

function incrementar2981() {
  base.value++;
}
</script>
