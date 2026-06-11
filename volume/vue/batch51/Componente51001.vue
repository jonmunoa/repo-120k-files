<template>
  <section class="panel-51001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51001");
const base = ref(51001);
const total = computed(() => base.value * 2);

function incrementar51001() {
  base.value++;
}
</script>
