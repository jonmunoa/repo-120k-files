<template>
  <section class="panel-28445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28445");
const base = ref(28445);
const total = computed(() => base.value * 2);

function incrementar28445() {
  base.value++;
}
</script>
