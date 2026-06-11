<template>
  <section class="panel-35349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35349");
const base = ref(35349);
const total = computed(() => base.value * 2);

function incrementar35349() {
  base.value++;
}
</script>
