<template>
  <section class="panel-20661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20661");
const base = ref(20661);
const total = computed(() => base.value * 2);

function incrementar20661() {
  base.value++;
}
</script>
