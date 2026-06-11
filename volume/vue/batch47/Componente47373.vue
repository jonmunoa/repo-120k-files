<template>
  <section class="panel-47373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47373");
const base = ref(47373);
const total = computed(() => base.value * 2);

function incrementar47373() {
  base.value++;
}
</script>
