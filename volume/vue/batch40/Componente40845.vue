<template>
  <section class="panel-40845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40845");
const base = ref(40845);
const total = computed(() => base.value * 2);

function incrementar40845() {
  base.value++;
}
</script>
