<template>
  <section class="panel-40125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40125");
const base = ref(40125);
const total = computed(() => base.value * 2);

function incrementar40125() {
  base.value++;
}
</script>
