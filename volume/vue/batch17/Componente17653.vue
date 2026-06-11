<template>
  <section class="panel-17653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17653");
const base = ref(17653);
const total = computed(() => base.value * 2);

function incrementar17653() {
  base.value++;
}
</script>
