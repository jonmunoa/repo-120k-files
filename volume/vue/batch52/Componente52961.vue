<template>
  <section class="panel-52961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52961");
const base = ref(52961);
const total = computed(() => base.value * 2);

function incrementar52961() {
  base.value++;
}
</script>
