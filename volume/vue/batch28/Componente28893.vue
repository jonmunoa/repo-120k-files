<template>
  <section class="panel-28893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28893");
const base = ref(28893);
const total = computed(() => base.value * 2);

function incrementar28893() {
  base.value++;
}
</script>
