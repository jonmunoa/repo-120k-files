<template>
  <section class="panel-53429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53429");
const base = ref(53429);
const total = computed(() => base.value * 2);

function incrementar53429() {
  base.value++;
}
</script>
