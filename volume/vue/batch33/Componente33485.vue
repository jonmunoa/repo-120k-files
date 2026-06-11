<template>
  <section class="panel-33485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33485");
const base = ref(33485);
const total = computed(() => base.value * 2);

function incrementar33485() {
  base.value++;
}
</script>
