<template>
  <section class="panel-12561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12561");
const base = ref(12561);
const total = computed(() => base.value * 2);

function incrementar12561() {
  base.value++;
}
</script>
