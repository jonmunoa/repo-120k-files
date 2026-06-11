<template>
  <section class="panel-18109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18109");
const base = ref(18109);
const total = computed(() => base.value * 2);

function incrementar18109() {
  base.value++;
}
</script>
