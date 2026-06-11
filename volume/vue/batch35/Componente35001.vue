<template>
  <section class="panel-35001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35001");
const base = ref(35001);
const total = computed(() => base.value * 2);

function incrementar35001() {
  base.value++;
}
</script>
