<template>
  <section class="panel-109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 109");
const base = ref(109);
const total = computed(() => base.value * 2);

function incrementar109() {
  base.value++;
}
</script>
