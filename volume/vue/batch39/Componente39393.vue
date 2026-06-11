<template>
  <section class="panel-39393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39393");
const base = ref(39393);
const total = computed(() => base.value * 2);

function incrementar39393() {
  base.value++;
}
</script>
