<template>
  <section class="panel-45961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45961");
const base = ref(45961);
const total = computed(() => base.value * 2);

function incrementar45961() {
  base.value++;
}
</script>
