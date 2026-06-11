<template>
  <section class="panel-34153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34153");
const base = ref(34153);
const total = computed(() => base.value * 2);

function incrementar34153() {
  base.value++;
}
</script>
