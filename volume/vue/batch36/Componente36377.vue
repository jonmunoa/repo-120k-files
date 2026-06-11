<template>
  <section class="panel-36377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36377");
const base = ref(36377);
const total = computed(() => base.value * 2);

function incrementar36377() {
  base.value++;
}
</script>
