<template>
  <section class="panel-8293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8293");
const base = ref(8293);
const total = computed(() => base.value * 2);

function incrementar8293() {
  base.value++;
}
</script>
