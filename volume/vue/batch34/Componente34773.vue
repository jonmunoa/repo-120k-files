<template>
  <section class="panel-34773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34773");
const base = ref(34773);
const total = computed(() => base.value * 2);

function incrementar34773() {
  base.value++;
}
</script>
