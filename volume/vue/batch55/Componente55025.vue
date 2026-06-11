<template>
  <section class="panel-55025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55025");
const base = ref(55025);
const total = computed(() => base.value * 2);

function incrementar55025() {
  base.value++;
}
</script>
