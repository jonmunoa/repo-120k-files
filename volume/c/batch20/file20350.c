// fichero 20350 -- macros y constantes -- MODIFICADO
#define LIMITE_20350 20550
#define FACTOR_20350 2

int aplicar_limite20350(int valor) {
    if (valor > LIMITE_20350) return LIMITE_20350;
    return valor * FACTOR_20350;
}
