<template>
  <section class="panel-13573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13573");
const base = ref(13573);
const total = computed(() => base.value * 2);

function incrementar13573() {
  base.value++;
}
</script>
