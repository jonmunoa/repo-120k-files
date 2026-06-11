<template>
  <section class="panel-31429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31429");
const base = ref(31429);
const total = computed(() => base.value * 2);

function incrementar31429() {
  base.value++;
}
</script>
