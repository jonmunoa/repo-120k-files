<template>
  <section class="panel-18005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18005");
const base = ref(18005);
const total = computed(() => base.value * 2);

function incrementar18005() {
  base.value++;
}
</script>
