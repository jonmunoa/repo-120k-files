<template>
  <section class="panel-14785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14785");
const base = ref(14785);
const total = computed(() => base.value * 2);

function incrementar14785() {
  base.value++;
}
</script>
