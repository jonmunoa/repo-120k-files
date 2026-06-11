<template>
  <section class="panel-19185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19185");
const base = ref(19185);
const total = computed(() => base.value * 2);

function incrementar19185() {
  base.value++;
}
</script>
