<template>
  <section class="panel-35745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35745");
const base = ref(35745);
const total = computed(() => base.value * 2);

function incrementar35745() {
  base.value++;
}
</script>
