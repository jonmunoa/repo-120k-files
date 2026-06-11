<template>
  <section class="panel-21921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21921");
const base = ref(21921);
const total = computed(() => base.value * 2);

function incrementar21921() {
  base.value++;
}
</script>
