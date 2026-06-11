<template>
  <section class="panel-11197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11197");
const base = ref(11197);
const total = computed(() => base.value * 2);

function incrementar11197() {
  base.value++;
}
</script>
