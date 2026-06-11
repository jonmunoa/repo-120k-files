<template>
  <section class="panel-55001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55001");
const base = ref(55001);
const total = computed(() => base.value * 2);

function incrementar55001() {
  base.value++;
}
</script>
