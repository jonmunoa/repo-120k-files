<template>
  <section class="panel-17353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17353");
const base = ref(17353);
const total = computed(() => base.value * 2);

function incrementar17353() {
  base.value++;
}
</script>
