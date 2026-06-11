<template>
  <section class="panel-40625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40625");
const base = ref(40625);
const total = computed(() => base.value * 2);

function incrementar40625() {
  base.value++;
}
</script>
