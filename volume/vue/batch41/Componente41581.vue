<template>
  <section class="panel-41581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41581");
const base = ref(41581);
const total = computed(() => base.value * 2);

function incrementar41581() {
  base.value++;
}
</script>
