<template>
  <section class="panel-57869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57869");
const base = ref(57869);
const total = computed(() => base.value * 2);

function incrementar57869() {
  base.value++;
}
</script>
