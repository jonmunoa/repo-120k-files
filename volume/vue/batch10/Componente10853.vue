<template>
  <section class="panel-10853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10853");
const base = ref(10853);
const total = computed(() => base.value * 2);

function incrementar10853() {
  base.value++;
}
</script>
