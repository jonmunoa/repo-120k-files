<template>
  <section class="panel-7429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7429");
const base = ref(7429);
const total = computed(() => base.value * 2);

function incrementar7429() {
  base.value++;
}
</script>
