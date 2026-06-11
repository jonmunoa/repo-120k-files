<template>
  <section class="panel-32449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32449");
const base = ref(32449);
const total = computed(() => base.value * 2);

function incrementar32449() {
  base.value++;
}
</script>
