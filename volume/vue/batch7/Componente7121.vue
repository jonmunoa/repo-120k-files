<template>
  <section class="panel-7121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7121");
const base = ref(7121);
const total = computed(() => base.value * 2);

function incrementar7121() {
  base.value++;
}
</script>
