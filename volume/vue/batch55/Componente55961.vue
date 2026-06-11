<template>
  <section class="panel-55961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55961");
const base = ref(55961);
const total = computed(() => base.value * 2);

function incrementar55961() {
  base.value++;
}
</script>
