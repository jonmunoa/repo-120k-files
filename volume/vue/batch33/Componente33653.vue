<template>
  <section class="panel-33653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33653");
const base = ref(33653);
const total = computed(() => base.value * 2);

function incrementar33653() {
  base.value++;
}
</script>
