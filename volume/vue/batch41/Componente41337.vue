<template>
  <section class="panel-41337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41337");
const base = ref(41337);
const total = computed(() => base.value * 2);

function incrementar41337() {
  base.value++;
}
</script>
