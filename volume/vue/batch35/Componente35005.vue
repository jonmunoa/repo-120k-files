<template>
  <section class="panel-35005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35005");
const base = ref(35005);
const total = computed(() => base.value * 2);

function incrementar35005() {
  base.value++;
}
</script>
