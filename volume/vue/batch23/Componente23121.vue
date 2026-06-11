<template>
  <section class="panel-23121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23121");
const base = ref(23121);
const total = computed(() => base.value * 2);

function incrementar23121() {
  base.value++;
}
</script>
