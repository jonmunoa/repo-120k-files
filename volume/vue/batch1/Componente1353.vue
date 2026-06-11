<template>
  <section class="panel-1353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1353");
const base = ref(1353);
const total = computed(() => base.value * 2);

function incrementar1353() {
  base.value++;
}
</script>
