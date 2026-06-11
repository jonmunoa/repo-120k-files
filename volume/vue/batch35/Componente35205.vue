<template>
  <section class="panel-35205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35205");
const base = ref(35205);
const total = computed(() => base.value * 2);

function incrementar35205() {
  base.value++;
}
</script>
