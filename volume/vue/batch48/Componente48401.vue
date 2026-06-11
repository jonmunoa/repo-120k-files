<template>
  <section class="panel-48401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48401");
const base = ref(48401);
const total = computed(() => base.value * 2);

function incrementar48401() {
  base.value++;
}
</script>
