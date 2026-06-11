<template>
  <section class="panel-23349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23349");
const base = ref(23349);
const total = computed(() => base.value * 2);

function incrementar23349() {
  base.value++;
}
</script>
