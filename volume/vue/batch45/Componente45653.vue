<template>
  <section class="panel-45653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45653");
const base = ref(45653);
const total = computed(() => base.value * 2);

function incrementar45653() {
  base.value++;
}
</script>
