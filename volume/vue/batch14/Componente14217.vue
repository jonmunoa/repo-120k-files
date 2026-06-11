<template>
  <section class="panel-14217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14217");
const base = ref(14217);
const total = computed(() => base.value * 2);

function incrementar14217() {
  base.value++;
}
</script>
