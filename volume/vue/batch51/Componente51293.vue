<template>
  <section class="panel-51293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51293");
const base = ref(51293);
const total = computed(() => base.value * 2);

function incrementar51293() {
  base.value++;
}
</script>
