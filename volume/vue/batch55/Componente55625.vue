<template>
  <section class="panel-55625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55625");
const base = ref(55625);
const total = computed(() => base.value * 2);

function incrementar55625() {
  base.value++;
}
</script>
