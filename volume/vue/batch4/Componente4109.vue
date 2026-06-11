<template>
  <section class="panel-4109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4109");
const base = ref(4109);
const total = computed(() => base.value * 2);

function incrementar4109() {
  base.value++;
}
</script>
