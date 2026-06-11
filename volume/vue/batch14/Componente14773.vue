<template>
  <section class="panel-14773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14773");
const base = ref(14773);
const total = computed(() => base.value * 2);

function incrementar14773() {
  base.value++;
}
</script>
