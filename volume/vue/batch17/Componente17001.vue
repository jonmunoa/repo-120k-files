<template>
  <section class="panel-17001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17001");
const base = ref(17001);
const total = computed(() => base.value * 2);

function incrementar17001() {
  base.value++;
}
</script>
