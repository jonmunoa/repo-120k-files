<template>
  <section class="panel-40893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40893");
const base = ref(40893);
const total = computed(() => base.value * 2);

function incrementar40893() {
  base.value++;
}
</script>
