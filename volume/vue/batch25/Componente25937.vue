<template>
  <section class="panel-25937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25937");
const base = ref(25937);
const total = computed(() => base.value * 2);

function incrementar25937() {
  base.value++;
}
</script>
