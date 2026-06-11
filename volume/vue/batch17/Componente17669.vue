<template>
  <section class="panel-17669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17669");
const base = ref(17669);
const total = computed(() => base.value * 2);

function incrementar17669() {
  base.value++;
}
</script>
