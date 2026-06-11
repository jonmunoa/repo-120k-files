<template>
  <section class="panel-21361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21361");
const base = ref(21361);
const total = computed(() => base.value * 2);

function incrementar21361() {
  base.value++;
}
</script>
