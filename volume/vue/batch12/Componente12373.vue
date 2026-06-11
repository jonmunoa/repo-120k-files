<template>
  <section class="panel-12373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12373");
const base = ref(12373);
const total = computed(() => base.value * 2);

function incrementar12373() {
  base.value++;
}
</script>
