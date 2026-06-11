<template>
  <section class="panel-55557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55557");
const base = ref(55557);
const total = computed(() => base.value * 2);

function incrementar55557() {
  base.value++;
}
</script>
