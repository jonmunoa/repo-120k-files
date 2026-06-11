<template>
  <section class="panel-37449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37449");
const base = ref(37449);
const total = computed(() => base.value * 2);

function incrementar37449() {
  base.value++;
}
</script>
