<template>
  <section class="panel-10353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10353");
const base = ref(10353);
const total = computed(() => base.value * 2);

function incrementar10353() {
  base.value++;
}
</script>
