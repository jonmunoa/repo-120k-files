<template>
  <section class="panel-21125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21125");
const base = ref(21125);
const total = computed(() => base.value * 2);

function incrementar21125() {
  base.value++;
}
</script>
