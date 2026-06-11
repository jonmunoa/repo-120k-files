<template>
  <section class="panel-3849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3849");
const base = ref(3849);
const total = computed(() => base.value * 2);

function incrementar3849() {
  base.value++;
}
</script>
