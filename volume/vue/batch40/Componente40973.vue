<template>
  <section class="panel-40973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40973");
const base = ref(40973);
const total = computed(() => base.value * 2);

function incrementar40973() {
  base.value++;
}
</script>
