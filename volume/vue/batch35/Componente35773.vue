<template>
  <section class="panel-35773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35773");
const base = ref(35773);
const total = computed(() => base.value * 2);

function incrementar35773() {
  base.value++;
}
</script>
