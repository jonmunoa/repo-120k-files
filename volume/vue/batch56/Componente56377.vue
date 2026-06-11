<template>
  <section class="panel-56377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56377");
const base = ref(56377);
const total = computed(() => base.value * 2);

function incrementar56377() {
  base.value++;
}
</script>
