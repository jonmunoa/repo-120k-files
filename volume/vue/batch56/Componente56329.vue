<template>
  <section class="panel-56329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56329");
const base = ref(56329);
const total = computed(() => base.value * 2);

function incrementar56329() {
  base.value++;
}
</script>
