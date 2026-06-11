<template>
  <section class="panel-7149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7149");
const base = ref(7149);
const total = computed(() => base.value * 2);

function incrementar7149() {
  base.value++;
}
</script>
