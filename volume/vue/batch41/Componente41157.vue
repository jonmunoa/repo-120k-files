<template>
  <section class="panel-41157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41157");
const base = ref(41157);
const total = computed(() => base.value * 2);

function incrementar41157() {
  base.value++;
}
</script>
