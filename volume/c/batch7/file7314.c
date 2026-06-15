// fichero 7314 -- macros y constantes -- MODIFICADO
#define LIMITE_7314 7514
#define FACTOR_7314 6

int aplicar_limite7314(int valor) {
    if (valor > LIMITE_7314) return LIMITE_7314;
    return valor * FACTOR_7314;
}
