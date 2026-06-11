<template>
  <section class="panel-14937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14937");
const base = ref(14937);
const total = computed(() => base.value * 2);

function incrementar14937() {
  base.value++;
}
</script>
