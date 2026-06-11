<template>
  <section class="panel-28401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28401");
const base = ref(28401);
const total = computed(() => base.value * 2);

function incrementar28401() {
  base.value++;
}
</script>
