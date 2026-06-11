<template>
  <section class="panel-37109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37109");
const base = ref(37109);
const total = computed(() => base.value * 2);

function incrementar37109() {
  base.value++;
}
</script>
