<template>
  <section class="panel-45393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45393");
const base = ref(45393);
const total = computed(() => base.value * 2);

function incrementar45393() {
  base.value++;
}
</script>
