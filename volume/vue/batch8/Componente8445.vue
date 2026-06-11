<template>
  <section class="panel-8445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8445");
const base = ref(8445);
const total = computed(() => base.value * 2);

function incrementar8445() {
  base.value++;
}
</script>
