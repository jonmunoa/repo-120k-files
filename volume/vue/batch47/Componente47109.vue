<template>
  <section class="panel-47109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47109");
const base = ref(47109);
const total = computed(() => base.value * 2);

function incrementar47109() {
  base.value++;
}
</script>
