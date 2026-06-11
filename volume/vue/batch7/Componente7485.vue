<template>
  <section class="panel-7485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7485");
const base = ref(7485);
const total = computed(() => base.value * 2);

function incrementar7485() {
  base.value++;
}
</script>
