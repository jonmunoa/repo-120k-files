// fichero 43030 -- macros y constantes -- MODIFICADO
#define LIMITE_43030 43230
#define FACTOR_43030 2

int aplicar_limite43030(int valor) {
    if (valor > LIMITE_43030) return LIMITE_43030;
    return valor * FACTOR_43030;
}
