<template>
  <section class="panel-4153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4153");
const base = ref(4153);
const total = computed(() => base.value * 2);

function incrementar4153() {
  base.value++;
}
</script>
