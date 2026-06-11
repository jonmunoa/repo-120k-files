<template>
  <section class="panel-20353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20353");
const base = ref(20353);
const total = computed(() => base.value * 2);

function incrementar20353() {
  base.value++;
}
</script>
