<template>
  <section class="panel-13">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13");
const base = ref(13);
const total = computed(() => base.value * 2);

function incrementar13() {
  base.value++;
}
</script>
