<template>
  <section class="panel-16377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16377");
const base = ref(16377);
const total = computed(() => base.value * 2);

function incrementar16377() {
  base.value++;
}
</script>
