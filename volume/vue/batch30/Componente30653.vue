<template>
  <section class="panel-30653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30653");
const base = ref(30653);
const total = computed(() => base.value * 2);

function incrementar30653() {
  base.value++;
}
</script>
