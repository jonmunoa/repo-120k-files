<template>
  <section class="panel-51109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51109");
const base = ref(51109);
const total = computed(() => base.value * 2);

function incrementar51109() {
  base.value++;
}
</script>
