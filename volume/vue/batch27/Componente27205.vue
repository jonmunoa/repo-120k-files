<template>
  <section class="panel-27205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27205");
const base = ref(27205);
const total = computed(() => base.value * 2);

function incrementar27205() {
  base.value++;
}
</script>
