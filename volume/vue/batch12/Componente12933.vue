<template>
  <section class="panel-12933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12933");
const base = ref(12933);
const total = computed(() => base.value * 2);

function incrementar12933() {
  base.value++;
}
</script>
