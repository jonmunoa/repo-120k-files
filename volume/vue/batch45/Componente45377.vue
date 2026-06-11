<template>
  <section class="panel-45377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45377");
const base = ref(45377);
const total = computed(() => base.value * 2);

function incrementar45377() {
  base.value++;
}
</script>
