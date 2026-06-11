<template>
  <section class="panel-50745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50745");
const base = ref(50745);
const total = computed(() => base.value * 2);

function incrementar50745() {
  base.value++;
}
</script>
