<template>
  <section class="panel-205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 205");
const base = ref(205);
const total = computed(() => base.value * 2);

function incrementar205() {
  base.value++;
}
</script>
