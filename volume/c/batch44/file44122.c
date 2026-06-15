// fichero 44122 -- macros y constantes -- MODIFICADO
#define LIMITE_44122 44322
#define FACTOR_44122 4

int aplicar_limite44122(int valor) {
    if (valor > LIMITE_44122) return LIMITE_44122;
    return valor * FACTOR_44122;
}
