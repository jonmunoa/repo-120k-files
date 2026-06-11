<template>
  <section class="panel-14353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14353");
const base = ref(14353);
const total = computed(() => base.value * 2);

function incrementar14353() {
  base.value++;
}
</script>
