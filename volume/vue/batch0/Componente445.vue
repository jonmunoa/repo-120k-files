<template>
  <section class="panel-445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 445");
const base = ref(445);
const total = computed(() => base.value * 2);

function incrementar445() {
  base.value++;
}
</script>
