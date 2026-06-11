<template>
  <section class="panel-21745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21745");
const base = ref(21745);
const total = computed(() => base.value * 2);

function incrementar21745() {
  base.value++;
}
</script>
