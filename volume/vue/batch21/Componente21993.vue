<template>
  <section class="panel-21993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21993");
const base = ref(21993);
const total = computed(() => base.value * 2);

function incrementar21993() {
  base.value++;
}
</script>
