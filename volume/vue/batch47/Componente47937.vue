<template>
  <section class="panel-47937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47937");
const base = ref(47937);
const total = computed(() => base.value * 2);

function incrementar47937() {
  base.value++;
}
</script>
