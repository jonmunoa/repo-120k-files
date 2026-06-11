<template>
  <section class="panel-50957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50957");
const base = ref(50957);
const total = computed(() => base.value * 2);

function incrementar50957() {
  base.value++;
}
</script>
