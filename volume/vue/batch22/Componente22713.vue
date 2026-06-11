<template>
  <section class="panel-22713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22713");
const base = ref(22713);
const total = computed(() => base.value * 2);

function incrementar22713() {
  base.value++;
}
</script>
