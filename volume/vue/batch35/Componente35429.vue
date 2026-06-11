<template>
  <section class="panel-35429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35429");
const base = ref(35429);
const total = computed(() => base.value * 2);

function incrementar35429() {
  base.value++;
}
</script>
