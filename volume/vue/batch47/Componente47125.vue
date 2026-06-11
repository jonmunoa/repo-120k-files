<template>
  <section class="panel-47125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47125");
const base = ref(47125);
const total = computed(() => base.value * 2);

function incrementar47125() {
  base.value++;
}
</script>
