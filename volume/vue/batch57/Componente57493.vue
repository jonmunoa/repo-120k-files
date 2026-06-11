<template>
  <section class="panel-57493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57493");
const base = ref(57493);
const total = computed(() => base.value * 2);

function incrementar57493() {
  base.value++;
}
</script>
