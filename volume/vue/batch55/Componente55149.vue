<template>
  <section class="panel-55149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55149");
const base = ref(55149);
const total = computed(() => base.value * 2);

function incrementar55149() {
  base.value++;
}
</script>
