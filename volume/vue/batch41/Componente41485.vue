<template>
  <section class="panel-41485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41485");
const base = ref(41485);
const total = computed(() => base.value * 2);

function incrementar41485() {
  base.value++;
}
</script>
