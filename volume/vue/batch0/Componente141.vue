<template>
  <section class="panel-141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 141");
const base = ref(141);
const total = computed(() => base.value * 2);

function incrementar141() {
  base.value++;
}
</script>
