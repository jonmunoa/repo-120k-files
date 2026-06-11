<template>
  <section class="panel-11961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11961");
const base = ref(11961);
const total = computed(() => base.value * 2);

function incrementar11961() {
  base.value++;
}
</script>
