<template>
  <section class="panel-5125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5125");
const base = ref(5125);
const total = computed(() => base.value * 2);

function incrementar5125() {
  base.value++;
}
</script>
