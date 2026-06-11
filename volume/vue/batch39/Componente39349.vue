<template>
  <section class="panel-39349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39349");
const base = ref(39349);
const total = computed(() => base.value * 2);

function incrementar39349() {
  base.value++;
}
</script>
