<template>
  <section class="panel-14789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14789");
const base = ref(14789);
const total = computed(() => base.value * 2);

function incrementar14789() {
  base.value++;
}
</script>
