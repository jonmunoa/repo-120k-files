<template>
  <section class="panel-34937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34937");
const base = ref(34937);
const total = computed(() => base.value * 2);

function incrementar34937() {
  base.value++;
}
</script>
