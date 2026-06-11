<template>
  <section class="panel-13801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13801");
const base = ref(13801);
const total = computed(() => base.value * 2);

function incrementar13801() {
  base.value++;
}
</script>
