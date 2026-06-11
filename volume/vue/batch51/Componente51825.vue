<template>
  <section class="panel-51825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51825");
const base = ref(51825);
const total = computed(() => base.value * 2);

function incrementar51825() {
  base.value++;
}
</script>
