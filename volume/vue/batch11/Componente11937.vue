<template>
  <section class="panel-11937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11937");
const base = ref(11937);
const total = computed(() => base.value * 2);

function incrementar11937() {
  base.value++;
}
</script>
