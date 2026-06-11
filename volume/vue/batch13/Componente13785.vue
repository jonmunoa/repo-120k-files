<template>
  <section class="panel-13785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13785");
const base = ref(13785);
const total = computed(() => base.value * 2);

function incrementar13785() {
  base.value++;
}
</script>
