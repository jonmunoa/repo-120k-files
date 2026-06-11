<template>
  <section class="panel-18001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18001");
const base = ref(18001);
const total = computed(() => base.value * 2);

function incrementar18001() {
  base.value++;
}
</script>
