<template>
  <section class="panel-39353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39353");
const base = ref(39353);
const total = computed(() => base.value * 2);

function incrementar39353() {
  base.value++;
}
</script>
