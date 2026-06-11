<template>
  <section class="panel-55121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55121");
const base = ref(55121);
const total = computed(() => base.value * 2);

function incrementar55121() {
  base.value++;
}
</script>
