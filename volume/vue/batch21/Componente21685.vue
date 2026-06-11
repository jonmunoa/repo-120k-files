<template>
  <section class="panel-21685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21685");
const base = ref(21685);
const total = computed(() => base.value * 2);

function incrementar21685() {
  base.value++;
}
</script>
