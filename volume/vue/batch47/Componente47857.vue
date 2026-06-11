<template>
  <section class="panel-47857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47857");
const base = ref(47857);
const total = computed(() => base.value * 2);

function incrementar47857() {
  base.value++;
}
</script>
