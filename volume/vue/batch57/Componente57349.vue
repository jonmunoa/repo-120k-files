<template>
  <section class="panel-57349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57349");
const base = ref(57349);
const total = computed(() => base.value * 2);

function incrementar57349() {
  base.value++;
}
</script>
