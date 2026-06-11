<template>
  <section class="panel-5377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5377");
const base = ref(5377);
const total = computed(() => base.value * 2);

function incrementar5377() {
  base.value++;
}
</script>
