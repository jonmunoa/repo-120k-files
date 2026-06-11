<template>
  <section class="panel-52377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52377");
const base = ref(52377);
const total = computed(() => base.value * 2);

function incrementar52377() {
  base.value++;
}
</script>
