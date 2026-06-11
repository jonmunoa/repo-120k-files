<template>
  <section class="panel-19401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19401");
const base = ref(19401);
const total = computed(() => base.value * 2);

function incrementar19401() {
  base.value++;
}
</script>
