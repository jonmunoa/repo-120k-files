<template>
  <section class="panel-20653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20653");
const base = ref(20653);
const total = computed(() => base.value * 2);

function incrementar20653() {
  base.value++;
}
</script>
