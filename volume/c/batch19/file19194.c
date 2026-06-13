// fichero 19194 -- macros y constantes
#define LIMITE_19194 19294
#define FACTOR_19194 5

int aplicar_limite19194(int valor) {
    if (valor > LIMITE_19194) return LIMITE_19194;
    return valor * FACTOR_19194;
}
