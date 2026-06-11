<template>
  <section class="panel-8429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8429");
const base = ref(8429);
const total = computed(() => base.value * 2);

function incrementar8429() {
  base.value++;
}
</script>
