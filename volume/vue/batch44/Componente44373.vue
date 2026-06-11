<template>
  <section class="panel-44373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44373");
const base = ref(44373);
const total = computed(() => base.value * 2);

function incrementar44373() {
  base.value++;
}
</script>
