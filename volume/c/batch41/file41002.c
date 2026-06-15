// fichero 41002 -- macros y constantes -- MODIFICADO
#define LIMITE_41002 41202
#define FACTOR_41002 4

int aplicar_limite41002(int valor) {
    if (valor > LIMITE_41002) return LIMITE_41002;
    return valor * FACTOR_41002;
}
