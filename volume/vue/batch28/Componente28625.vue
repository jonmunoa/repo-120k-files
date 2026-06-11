<template>
  <section class="panel-28625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28625");
const base = ref(28625);
const total = computed(() => base.value * 2);

function incrementar28625() {
  base.value++;
}
</script>
