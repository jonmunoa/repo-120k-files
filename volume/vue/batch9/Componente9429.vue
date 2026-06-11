<template>
  <section class="panel-9429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9429");
const base = ref(9429);
const total = computed(() => base.value * 2);

function incrementar9429() {
  base.value++;
}
</script>
