<template>
  <section class="panel-26741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26741");
const base = ref(26741);
const total = computed(() => base.value * 2);

function incrementar26741() {
  base.value++;
}
</script>
