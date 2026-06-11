<template>
  <section class="panel-20961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20961");
const base = ref(20961);
const total = computed(() => base.value * 2);

function incrementar20961() {
  base.value++;
}
</script>
