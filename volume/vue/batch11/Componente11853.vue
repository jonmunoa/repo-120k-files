<template>
  <section class="panel-11853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11853");
const base = ref(11853);
const total = computed(() => base.value * 2);

function incrementar11853() {
  base.value++;
}
</script>
