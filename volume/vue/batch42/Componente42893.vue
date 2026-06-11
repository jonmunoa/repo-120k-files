<template>
  <section class="panel-42893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42893");
const base = ref(42893);
const total = computed(() => base.value * 2);

function incrementar42893() {
  base.value++;
}
</script>
