<template>
  <section class="panel-45785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45785");
const base = ref(45785);
const total = computed(() => base.value * 2);

function incrementar45785() {
  base.value++;
}
</script>
