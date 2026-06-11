<template>
  <section class="panel-18321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18321");
const base = ref(18321);
const total = computed(() => base.value * 2);

function incrementar18321() {
  base.value++;
}
</script>
