<template>
  <section class="panel-13773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13773");
const base = ref(13773);
const total = computed(() => base.value * 2);

function incrementar13773() {
  base.value++;
}
</script>
