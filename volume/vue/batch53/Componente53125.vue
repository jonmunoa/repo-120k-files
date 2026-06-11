<template>
  <section class="panel-53125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53125");
const base = ref(53125);
const total = computed(() => base.value * 2);

function incrementar53125() {
  base.value++;
}
</script>
