// fichero 19098 -- macros y constantes
#define LIMITE_19098 19198
#define FACTOR_19098 4

int aplicar_limite19098(int valor) {
    if (valor > LIMITE_19098) return LIMITE_19098;
    return valor * FACTOR_19098;
}
