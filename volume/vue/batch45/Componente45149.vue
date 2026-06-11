<template>
  <section class="panel-45149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45149");
const base = ref(45149);
const total = computed(() => base.value * 2);

function incrementar45149() {
  base.value++;
}
</script>
