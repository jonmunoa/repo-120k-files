<template>
  <section class="panel-53893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53893");
const base = ref(53893);
const total = computed(() => base.value * 2);

function incrementar53893() {
  base.value++;
}
</script>
