<template>
  <section class="panel-7353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7353");
const base = ref(7353);
const total = computed(() => base.value * 2);

function incrementar7353() {
  base.value++;
}
</script>
