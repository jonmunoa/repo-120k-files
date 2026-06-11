<template>
  <section class="panel-41429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41429");
const base = ref(41429);
const total = computed(() => base.value * 2);

function incrementar41429() {
  base.value++;
}
</script>
