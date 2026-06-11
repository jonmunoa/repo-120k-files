<template>
  <section class="panel-10549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10549");
const base = ref(10549);
const total = computed(() => base.value * 2);

function incrementar10549() {
  base.value++;
}
</script>
