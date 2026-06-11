<template>
  <section class="panel-6865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6865");
const base = ref(6865);
const total = computed(() => base.value * 2);

function incrementar6865() {
  base.value++;
}
</script>
