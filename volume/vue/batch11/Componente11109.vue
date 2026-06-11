<template>
  <section class="panel-11109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11109");
const base = ref(11109);
const total = computed(() => base.value * 2);

function incrementar11109() {
  base.value++;
}
</script>
