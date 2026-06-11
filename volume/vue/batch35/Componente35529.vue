<template>
  <section class="panel-35529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35529");
const base = ref(35529);
const total = computed(() => base.value * 2);

function incrementar35529() {
  base.value++;
}
</script>
