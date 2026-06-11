<template>
  <section class="panel-40485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40485");
const base = ref(40485);
const total = computed(() => base.value * 2);

function incrementar40485() {
  base.value++;
}
</script>
