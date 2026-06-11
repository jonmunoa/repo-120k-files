<template>
  <section class="panel-37713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37713");
const base = ref(37713);
const total = computed(() => base.value * 2);

function incrementar37713() {
  base.value++;
}
</script>
