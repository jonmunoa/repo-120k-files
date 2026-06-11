<template>
  <section class="panel-17021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17021");
const base = ref(17021);
const total = computed(() => base.value * 2);

function incrementar17021() {
  base.value++;
}
</script>
