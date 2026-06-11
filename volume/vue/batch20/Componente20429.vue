<template>
  <section class="panel-20429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20429");
const base = ref(20429);
const total = computed(() => base.value * 2);

function incrementar20429() {
  base.value++;
}
</script>
