<template>
  <section class="panel-51853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51853");
const base = ref(51853);
const total = computed(() => base.value * 2);

function incrementar51853() {
  base.value++;
}
</script>
