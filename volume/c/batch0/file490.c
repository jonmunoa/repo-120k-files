// fichero 490 -- macros y constantes -- MODIFICADO
#define LIMITE_490 690
#define FACTOR_490 2

int aplicar_limite490(int valor) {
    if (valor > LIMITE_490) return LIMITE_490;
    return valor * FACTOR_490;
}
