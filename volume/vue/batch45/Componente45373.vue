<template>
  <section class="panel-45373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45373");
const base = ref(45373);
const total = computed(() => base.value * 2);

function incrementar45373() {
  base.value++;
}
</script>
