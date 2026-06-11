<template>
  <section class="panel-6941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6941");
const base = ref(6941);
const total = computed(() => base.value * 2);

function incrementar6941() {
  base.value++;
}
</script>
