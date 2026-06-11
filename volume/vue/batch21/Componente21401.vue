<template>
  <section class="panel-21401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21401");
const base = ref(21401);
const total = computed(() => base.value * 2);

function incrementar21401() {
  base.value++;
}
</script>
