<template>
  <section class="panel-22773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22773");
const base = ref(22773);
const total = computed(() => base.value * 2);

function incrementar22773() {
  base.value++;
}
</script>
