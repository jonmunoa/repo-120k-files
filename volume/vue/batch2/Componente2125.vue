<template>
  <section class="panel-2125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2125");
const base = ref(2125);
const total = computed(() => base.value * 2);

function incrementar2125() {
  base.value++;
}
</script>
