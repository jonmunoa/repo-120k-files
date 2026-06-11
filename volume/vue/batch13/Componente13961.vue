<template>
  <section class="panel-13961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13961");
const base = ref(13961);
const total = computed(() => base.value * 2);

function incrementar13961() {
  base.value++;
}
</script>
