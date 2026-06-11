<template>
  <section class="panel-50293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50293");
const base = ref(50293);
const total = computed(() => base.value * 2);

function incrementar50293() {
  base.value++;
}
</script>
