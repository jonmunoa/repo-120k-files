<template>
  <section class="panel-15401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15401");
const base = ref(15401);
const total = computed(() => base.value * 2);

function incrementar15401() {
  base.value++;
}
</script>
