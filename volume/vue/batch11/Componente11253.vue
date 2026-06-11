<template>
  <section class="panel-11253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11253");
const base = ref(11253);
const total = computed(() => base.value * 2);

function incrementar11253() {
  base.value++;
}
</script>
