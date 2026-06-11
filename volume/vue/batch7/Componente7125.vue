<template>
  <section class="panel-7125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7125");
const base = ref(7125);
const total = computed(() => base.value * 2);

function incrementar7125() {
  base.value++;
}
</script>
