<template>
  <section class="panel-47353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47353");
const base = ref(47353);
const total = computed(() => base.value * 2);

function incrementar47353() {
  base.value++;
}
</script>
