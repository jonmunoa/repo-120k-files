<template>
  <section class="panel-11049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11049");
const base = ref(11049);
const total = computed(() => base.value * 2);

function incrementar11049() {
  base.value++;
}
</script>
