<template>
  <section class="panel-14561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14561");
const base = ref(14561);
const total = computed(() => base.value * 2);

function incrementar14561() {
  base.value++;
}
</script>
