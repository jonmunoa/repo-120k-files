<template>
  <section class="panel-20121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20121");
const base = ref(20121);
const total = computed(() => base.value * 2);

function incrementar20121() {
  base.value++;
}
</script>
