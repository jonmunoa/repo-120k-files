<template>
  <section class="panel-24893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24893");
const base = ref(24893);
const total = computed(() => base.value * 2);

function incrementar24893() {
  base.value++;
}
</script>
