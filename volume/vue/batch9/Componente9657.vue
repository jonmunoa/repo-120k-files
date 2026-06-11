<template>
  <section class="panel-9657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9657");
const base = ref(9657);
const total = computed(() => base.value * 2);

function incrementar9657() {
  base.value++;
}
</script>
