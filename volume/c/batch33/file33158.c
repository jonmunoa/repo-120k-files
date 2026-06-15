// fichero 33158 -- macros y constantes -- MODIFICADO
#define LIMITE_33158 33358
#define FACTOR_33158 5

int aplicar_limite33158(int valor) {
    if (valor > LIMITE_33158) return LIMITE_33158;
    return valor * FACTOR_33158;
}
