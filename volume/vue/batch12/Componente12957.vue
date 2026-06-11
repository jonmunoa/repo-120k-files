<template>
  <section class="panel-12957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12957");
const base = ref(12957);
const total = computed(() => base.value * 2);

function incrementar12957() {
  base.value++;
}
</script>
