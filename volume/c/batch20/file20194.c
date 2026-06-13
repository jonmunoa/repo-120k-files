// fichero 20194 -- macros y constantes
#define LIMITE_20194 20294
#define FACTOR_20194 5

int aplicar_limite20194(int valor) {
    if (valor > LIMITE_20194) return LIMITE_20194;
    return valor * FACTOR_20194;
}
