<template>
  <section class="panel-52353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52353");
const base = ref(52353);
const total = computed(() => base.value * 2);

function incrementar52353() {
  base.value++;
}
</script>
