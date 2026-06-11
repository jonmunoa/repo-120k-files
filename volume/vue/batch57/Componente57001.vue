<template>
  <section class="panel-57001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57001");
const base = ref(57001);
const total = computed(() => base.value * 2);

function incrementar57001() {
  base.value++;
}
</script>
