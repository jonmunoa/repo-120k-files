<template>
  <section class="panel-28377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28377");
const base = ref(28377);
const total = computed(() => base.value * 2);

function incrementar28377() {
  base.value++;
}
</script>
