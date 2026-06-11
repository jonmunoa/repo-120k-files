<template>
  <section class="panel-33001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33001");
const base = ref(33001);
const total = computed(() => base.value * 2);

function incrementar33001() {
  base.value++;
}
</script>
