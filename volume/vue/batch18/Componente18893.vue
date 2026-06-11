<template>
  <section class="panel-18893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18893");
const base = ref(18893);
const total = computed(() => base.value * 2);

function incrementar18893() {
  base.value++;
}
</script>
