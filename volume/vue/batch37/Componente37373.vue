<template>
  <section class="panel-37373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37373");
const base = ref(37373);
const total = computed(() => base.value * 2);

function incrementar37373() {
  base.value++;
}
</script>
