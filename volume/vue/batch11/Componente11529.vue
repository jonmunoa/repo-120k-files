<template>
  <section class="panel-11529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11529");
const base = ref(11529);
const total = computed(() => base.value * 2);

function incrementar11529() {
  base.value++;
}
</script>
