<template>
  <section class="panel-28109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28109");
const base = ref(28109);
const total = computed(() => base.value * 2);

function incrementar28109() {
  base.value++;
}
</script>
