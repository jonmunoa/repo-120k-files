<template>
  <section class="panel-57653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57653");
const base = ref(57653);
const total = computed(() => base.value * 2);

function incrementar57653() {
  base.value++;
}
</script>
