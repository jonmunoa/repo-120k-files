<template>
  <section class="panel-153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 153");
const base = ref(153);
const total = computed(() => base.value * 2);

function incrementar153() {
  base.value++;
}
</script>
