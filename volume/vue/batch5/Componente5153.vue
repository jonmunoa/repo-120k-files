<template>
  <section class="panel-5153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5153");
const base = ref(5153);
const total = computed(() => base.value * 2);

function incrementar5153() {
  base.value++;
}
</script>
