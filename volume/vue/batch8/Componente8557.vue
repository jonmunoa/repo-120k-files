<template>
  <section class="panel-8557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8557");
const base = ref(8557);
const total = computed(() => base.value * 2);

function incrementar8557() {
  base.value++;
}
</script>
