<template>
  <section class="panel-20513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20513");
const base = ref(20513);
const total = computed(() => base.value * 2);

function incrementar20513() {
  base.value++;
}
</script>
