<template>
  <section class="panel-6849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6849");
const base = ref(6849);
const total = computed(() => base.value * 2);

function incrementar6849() {
  base.value++;
}
</script>
