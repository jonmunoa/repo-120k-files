// fichero 25526 -- macros y constantes -- MODIFICADO
#define LIMITE_25526 25726
#define FACTOR_25526 3

int aplicar_limite25526(int valor) {
    if (valor > LIMITE_25526) return LIMITE_25526;
    return valor * FACTOR_25526;
}
