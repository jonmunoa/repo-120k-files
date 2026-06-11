<template>
  <section class="panel-513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 513");
const base = ref(513);
const total = computed(() => base.value * 2);

function incrementar513() {
  base.value++;
}
</script>
