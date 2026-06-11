<template>
  <section class="panel-17401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17401");
const base = ref(17401);
const total = computed(() => base.value * 2);

function incrementar17401() {
  base.value++;
}
</script>
