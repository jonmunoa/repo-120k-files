<template>
  <section class="panel-47845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47845");
const base = ref(47845);
const total = computed(() => base.value * 2);

function incrementar47845() {
  base.value++;
}
</script>
