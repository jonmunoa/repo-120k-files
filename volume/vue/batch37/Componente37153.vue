<template>
  <section class="panel-37153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37153");
const base = ref(37153);
const total = computed(() => base.value * 2);

function incrementar37153() {
  base.value++;
}
</script>
