<template>
  <section class="panel-52245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52245");
const base = ref(52245);
const total = computed(() => base.value * 2);

function incrementar52245() {
  base.value++;
}
</script>
