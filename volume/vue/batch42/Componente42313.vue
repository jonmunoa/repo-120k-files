<template>
  <section class="panel-42313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42313");
const base = ref(42313);
const total = computed(() => base.value * 2);

function incrementar42313() {
  base.value++;
}
</script>
