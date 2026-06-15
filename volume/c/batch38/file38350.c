// fichero 38350 -- macros y constantes -- MODIFICADO
#define LIMITE_38350 38550
#define FACTOR_38350 2

int aplicar_limite38350(int valor) {
    if (valor > LIMITE_38350) return LIMITE_38350;
    return valor * FACTOR_38350;
}
