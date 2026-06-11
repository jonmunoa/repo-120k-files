<template>
  <section class="panel-5993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5993");
const base = ref(5993);
const total = computed(() => base.value * 2);

function incrementar5993() {
  base.value++;
}
</script>
