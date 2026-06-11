<template>
  <section class="panel-27109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27109");
const base = ref(27109);
const total = computed(() => base.value * 2);

function incrementar27109() {
  base.value++;
}
</script>
