<template>
  <section class="panel-13953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13953");
const base = ref(13953);
const total = computed(() => base.value * 2);

function incrementar13953() {
  base.value++;
}
</script>
