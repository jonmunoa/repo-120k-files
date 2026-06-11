<template>
  <section class="panel-13693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13693");
const base = ref(13693);
const total = computed(() => base.value * 2);

function incrementar13693() {
  base.value++;
}
</script>
