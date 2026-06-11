<template>
  <section class="panel-38001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38001");
const base = ref(38001);
const total = computed(() => base.value * 2);

function incrementar38001() {
  base.value++;
}
</script>
