<template>
  <section class="panel-373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 373");
const base = ref(373);
const total = computed(() => base.value * 2);

function incrementar373() {
  base.value++;
}
</script>
