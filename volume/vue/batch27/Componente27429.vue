<template>
  <section class="panel-27429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27429");
const base = ref(27429);
const total = computed(() => base.value * 2);

function incrementar27429() {
  base.value++;
}
</script>
