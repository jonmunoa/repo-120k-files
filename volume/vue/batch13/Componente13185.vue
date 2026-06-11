<template>
  <section class="panel-13185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13185");
const base = ref(13185);
const total = computed(() => base.value * 2);

function incrementar13185() {
  base.value++;
}
</script>
