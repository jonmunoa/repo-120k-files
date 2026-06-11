<template>
  <section class="panel-9653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9653");
const base = ref(9653);
const total = computed(() => base.value * 2);

function incrementar9653() {
  base.value++;
}
</script>
