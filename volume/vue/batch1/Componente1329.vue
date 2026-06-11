<template>
  <section class="panel-1329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1329");
const base = ref(1329);
const total = computed(() => base.value * 2);

function incrementar1329() {
  base.value++;
}
</script>
