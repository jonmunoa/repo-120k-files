<template>
  <section class="panel-10377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10377");
const base = ref(10377);
const total = computed(() => base.value * 2);

function incrementar10377() {
  base.value++;
}
</script>
