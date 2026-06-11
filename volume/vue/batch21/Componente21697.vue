<template>
  <section class="panel-21697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21697");
const base = ref(21697);
const total = computed(() => base.value * 2);

function incrementar21697() {
  base.value++;
}
</script>
