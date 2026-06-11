<template>
  <section class="panel-32925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32925");
const base = ref(32925);
const total = computed(() => base.value * 2);

function incrementar32925() {
  base.value++;
}
</script>
