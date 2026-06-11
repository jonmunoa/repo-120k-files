<template>
  <section class="panel-20001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20001");
const base = ref(20001);
const total = computed(() => base.value * 2);

function incrementar20001() {
  base.value++;
}
</script>
