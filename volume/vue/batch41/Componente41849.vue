<template>
  <section class="panel-41849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41849");
const base = ref(41849);
const total = computed(() => base.value * 2);

function incrementar41849() {
  base.value++;
}
</script>
