<template>
  <section class="panel-20833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20833");
const base = ref(20833);
const total = computed(() => base.value * 2);

function incrementar20833() {
  base.value++;
}
</script>
