<template>
  <section class="panel-28845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28845");
const base = ref(28845);
const total = computed(() => base.value * 2);

function incrementar28845() {
  base.value++;
}
</script>
