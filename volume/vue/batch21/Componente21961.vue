<template>
  <section class="panel-21961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21961");
const base = ref(21961);
const total = computed(() => base.value * 2);

function incrementar21961() {
  base.value++;
}
</script>
