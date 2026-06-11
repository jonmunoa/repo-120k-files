<template>
  <section class="panel-47401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47401");
const base = ref(47401);
const total = computed(() => base.value * 2);

function incrementar47401() {
  base.value++;
}
</script>
