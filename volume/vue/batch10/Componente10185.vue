<template>
  <section class="panel-10185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10185");
const base = ref(10185);
const total = computed(() => base.value * 2);

function incrementar10185() {
  base.value++;
}
</script>
