<template>
  <section class="panel-57853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57853");
const base = ref(57853);
const total = computed(() => base.value * 2);

function incrementar57853() {
  base.value++;
}
</script>
