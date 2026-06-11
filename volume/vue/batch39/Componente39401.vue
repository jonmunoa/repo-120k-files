<template>
  <section class="panel-39401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39401");
const base = ref(39401);
const total = computed(() => base.value * 2);

function incrementar39401() {
  base.value++;
}
</script>
