<template>
  <section class="panel-22105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22105");
const base = ref(22105);
const total = computed(() => base.value * 2);

function incrementar22105() {
  base.value++;
}
</script>
