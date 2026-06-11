<template>
  <section class="panel-33937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33937");
const base = ref(33937);
const total = computed(() => base.value * 2);

function incrementar33937() {
  base.value++;
}
</script>
