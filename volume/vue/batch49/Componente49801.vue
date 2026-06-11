<template>
  <section class="panel-49801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49801");
const base = ref(49801);
const total = computed(() => base.value * 2);

function incrementar49801() {
  base.value++;
}
</script>
