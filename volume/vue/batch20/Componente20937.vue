<template>
  <section class="panel-20937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20937");
const base = ref(20937);
const total = computed(() => base.value * 2);

function incrementar20937() {
  base.value++;
}
</script>
