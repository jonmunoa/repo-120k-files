<template>
  <section class="panel-41353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41353");
const base = ref(41353);
const total = computed(() => base.value * 2);

function incrementar41353() {
  base.value++;
}
</script>
