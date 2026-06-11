<template>
  <section class="panel-24785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24785");
const base = ref(24785);
const total = computed(() => base.value * 2);

function incrementar24785() {
  base.value++;
}
</script>
