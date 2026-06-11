<template>
  <section class="panel-35997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35997");
const base = ref(35997);
const total = computed(() => base.value * 2);

function incrementar35997() {
  base.value++;
}
</script>
