// fichero 41562 -- macros y constantes -- MODIFICADO
#define LIMITE_41562 41762
#define FACTOR_41562 4

int aplicar_limite41562(int valor) {
    if (valor > LIMITE_41562) return LIMITE_41562;
    return valor * FACTOR_41562;
}
