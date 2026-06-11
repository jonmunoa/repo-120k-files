<template>
  <section class="panel-34121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34121");
const base = ref(34121);
const total = computed(() => base.value * 2);

function incrementar34121() {
  base.value++;
}
</script>
