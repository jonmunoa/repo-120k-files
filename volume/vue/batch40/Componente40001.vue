<template>
  <section class="panel-40001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40001");
const base = ref(40001);
const total = computed(() => base.value * 2);

function incrementar40001() {
  base.value++;
}
</script>
