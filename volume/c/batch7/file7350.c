// fichero 7350 -- macros y constantes -- MODIFICADO
#define LIMITE_7350 7550
#define FACTOR_7350 2

int aplicar_limite7350(int valor) {
    if (valor > LIMITE_7350) return LIMITE_7350;
    return valor * FACTOR_7350;
}
