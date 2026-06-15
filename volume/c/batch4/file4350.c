// fichero 4350 -- macros y constantes -- MODIFICADO
#define LIMITE_4350 4550
#define FACTOR_4350 2

int aplicar_limite4350(int valor) {
    if (valor > LIMITE_4350) return LIMITE_4350;
    return valor * FACTOR_4350;
}
