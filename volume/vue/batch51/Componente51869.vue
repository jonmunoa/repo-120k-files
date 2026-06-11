<template>
  <section class="panel-51869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51869");
const base = ref(51869);
const total = computed(() => base.value * 2);

function incrementar51869() {
  base.value++;
}
</script>
