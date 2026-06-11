<template>
  <section class="panel-57961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57961");
const base = ref(57961);
const total = computed(() => base.value * 2);

function incrementar57961() {
  base.value++;
}
</script>
