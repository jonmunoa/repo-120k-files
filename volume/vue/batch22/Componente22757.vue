<template>
  <section class="panel-22757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22757");
const base = ref(22757);
const total = computed(() => base.value * 2);

function incrementar22757() {
  base.value++;
}
</script>
