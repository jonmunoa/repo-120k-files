<template>
  <section class="panel-35733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35733");
const base = ref(35733);
const total = computed(() => base.value * 2);

function incrementar35733() {
  base.value++;
}
</script>
