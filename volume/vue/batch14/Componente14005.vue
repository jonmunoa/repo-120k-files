<template>
  <section class="panel-14005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14005");
const base = ref(14005);
const total = computed(() => base.value * 2);

function incrementar14005() {
  base.value++;
}
</script>
