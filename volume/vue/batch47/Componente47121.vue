<template>
  <section class="panel-47121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47121");
const base = ref(47121);
const total = computed(() => base.value * 2);

function incrementar47121() {
  base.value++;
}
</script>
