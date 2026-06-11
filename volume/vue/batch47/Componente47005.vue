<template>
  <section class="panel-47005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47005");
const base = ref(47005);
const total = computed(() => base.value * 2);

function incrementar47005() {
  base.value++;
}
</script>
