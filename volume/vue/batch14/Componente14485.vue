<template>
  <section class="panel-14485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14485");
const base = ref(14485);
const total = computed(() => base.value * 2);

function incrementar14485() {
  base.value++;
}
</script>
