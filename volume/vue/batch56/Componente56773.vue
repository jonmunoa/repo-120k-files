<template>
  <section class="panel-56773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56773");
const base = ref(56773);
const total = computed(() => base.value * 2);

function incrementar56773() {
  base.value++;
}
</script>
