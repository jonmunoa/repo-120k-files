<template>
  <section class="panel-353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 353");
const base = ref(353);
const total = computed(() => base.value * 2);

function incrementar353() {
  base.value++;
}
</script>
