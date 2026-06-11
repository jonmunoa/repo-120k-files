<template>
  <section class="panel-13345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13345");
const base = ref(13345);
const total = computed(() => base.value * 2);

function incrementar13345() {
  base.value++;
}
</script>
