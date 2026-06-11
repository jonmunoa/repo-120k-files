<template>
  <section class="panel-14001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14001");
const base = ref(14001);
const total = computed(() => base.value * 2);

function incrementar14001() {
  base.value++;
}
</script>
