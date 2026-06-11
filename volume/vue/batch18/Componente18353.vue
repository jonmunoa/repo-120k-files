<template>
  <section class="panel-18353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18353");
const base = ref(18353);
const total = computed(() => base.value * 2);

function incrementar18353() {
  base.value++;
}
</script>
