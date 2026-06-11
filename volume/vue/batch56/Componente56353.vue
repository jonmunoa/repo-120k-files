<template>
  <section class="panel-56353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56353");
const base = ref(56353);
const total = computed(() => base.value * 2);

function incrementar56353() {
  base.value++;
}
</script>
