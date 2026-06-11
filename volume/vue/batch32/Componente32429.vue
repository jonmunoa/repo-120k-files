<template>
  <section class="panel-32429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32429");
const base = ref(32429);
const total = computed(() => base.value * 2);

function incrementar32429() {
  base.value++;
}
</script>
