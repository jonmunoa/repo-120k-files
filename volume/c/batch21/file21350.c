// fichero 21350 -- macros y constantes -- MODIFICADO
#define LIMITE_21350 21550
#define FACTOR_21350 2

int aplicar_limite21350(int valor) {
    if (valor > LIMITE_21350) return LIMITE_21350;
    return valor * FACTOR_21350;
}
