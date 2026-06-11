<template>
  <section class="panel-32993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32993");
const base = ref(32993);
const total = computed(() => base.value * 2);

function incrementar32993() {
  base.value++;
}
</script>
