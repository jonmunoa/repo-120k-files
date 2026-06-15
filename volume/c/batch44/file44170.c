// fichero 44170 -- macros y constantes -- MODIFICADO
#define LIMITE_44170 44370
#define FACTOR_44170 2

int aplicar_limite44170(int valor) {
    if (valor > LIMITE_44170) return LIMITE_44170;
    return valor * FACTOR_44170;
}
