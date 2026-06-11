<template>
  <section class="panel-23853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23853");
const base = ref(23853);
const total = computed(() => base.value * 2);

function incrementar23853() {
  base.value++;
}
</script>
