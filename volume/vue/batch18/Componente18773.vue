<template>
  <section class="panel-18773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18773");
const base = ref(18773);
const total = computed(() => base.value * 2);

function incrementar18773() {
  base.value++;
}
</script>
