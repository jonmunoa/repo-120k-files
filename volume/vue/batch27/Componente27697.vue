<template>
  <section class="panel-27697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27697");
const base = ref(27697);
const total = computed(() => base.value * 2);

function incrementar27697() {
  base.value++;
}
</script>
