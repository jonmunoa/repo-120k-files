<template>
  <section class="panel-41709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41709");
const base = ref(41709);
const total = computed(() => base.value * 2);

function incrementar41709() {
  base.value++;
}
</script>
