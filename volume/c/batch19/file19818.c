// fichero 19818 -- macros y constantes
#define LIMITE_19818 19918
#define FACTOR_19818 4

int aplicar_limite19818(int valor) {
    if (valor > LIMITE_19818) return LIMITE_19818;
    return valor * FACTOR_19818;
}
