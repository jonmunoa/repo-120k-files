<template>
  <section class="panel-21109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21109");
const base = ref(21109);
const total = computed(() => base.value * 2);

function incrementar21109() {
  base.value++;
}
</script>
