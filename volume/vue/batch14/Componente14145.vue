<template>
  <section class="panel-14145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14145");
const base = ref(14145);
const total = computed(() => base.value * 2);

function incrementar14145() {
  base.value++;
}
</script>
