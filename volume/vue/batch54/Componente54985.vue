<template>
  <section class="panel-54985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54985");
const base = ref(54985);
const total = computed(() => base.value * 2);

function incrementar54985() {
  base.value++;
}
</script>
