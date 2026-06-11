<template>
  <section class="panel-14573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14573");
const base = ref(14573);
const total = computed(() => base.value * 2);

function incrementar14573() {
  base.value++;
}
</script>
