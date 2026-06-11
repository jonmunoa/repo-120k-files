<template>
  <section class="panel-52373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52373");
const base = ref(52373);
const total = computed(() => base.value * 2);

function incrementar52373() {
  base.value++;
}
</script>
