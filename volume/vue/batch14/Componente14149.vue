<template>
  <section class="panel-14149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14149");
const base = ref(14149);
const total = computed(() => base.value * 2);

function incrementar14149() {
  base.value++;
}
</script>
