<template>
  <section class="panel-57477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57477");
const base = ref(57477);
const total = computed(() => base.value * 2);

function incrementar57477() {
  base.value++;
}
</script>
