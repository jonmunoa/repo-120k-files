<template>
  <section class="panel-34893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34893");
const base = ref(34893);
const total = computed(() => base.value * 2);

function incrementar34893() {
  base.value++;
}
</script>
