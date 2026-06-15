// fichero 33882 -- macros y constantes -- MODIFICADO
#define LIMITE_33882 34082
#define FACTOR_33882 4

int aplicar_limite33882(int valor) {
    if (valor > LIMITE_33882) return LIMITE_33882;
    return valor * FACTOR_33882;
}
