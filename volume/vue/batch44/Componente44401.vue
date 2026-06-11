<template>
  <section class="panel-44401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44401");
const base = ref(44401);
const total = computed(() => base.value * 2);

function incrementar44401() {
  base.value++;
}
</script>
