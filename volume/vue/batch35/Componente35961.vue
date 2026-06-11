<template>
  <section class="panel-35961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35961");
const base = ref(35961);
const total = computed(() => base.value * 2);

function incrementar35961() {
  base.value++;
}
</script>
