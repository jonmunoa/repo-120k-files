<template>
  <section class="panel-55773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55773");
const base = ref(55773);
const total = computed(() => base.value * 2);

function incrementar55773() {
  base.value++;
}
</script>
