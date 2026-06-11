<template>
  <section class="panel-185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 185");
const base = ref(185);
const total = computed(() => base.value * 2);

function incrementar185() {
  base.value++;
}
</script>
