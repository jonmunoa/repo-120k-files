// fichero 19230 -- macros y constantes
#define LIMITE_19230 19330
#define FACTOR_19230 1

int aplicar_limite19230(int valor) {
    if (valor > LIMITE_19230) return LIMITE_19230;
    return valor * FACTOR_19230;
}
