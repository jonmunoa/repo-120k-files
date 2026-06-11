<template>
  <section class="panel-27937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27937");
const base = ref(27937);
const total = computed(() => base.value * 2);

function incrementar27937() {
  base.value++;
}
</script>
