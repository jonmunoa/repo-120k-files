<template>
  <section class="panel-28449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28449");
const base = ref(28449);
const total = computed(() => base.value * 2);

function incrementar28449() {
  base.value++;
}
</script>
