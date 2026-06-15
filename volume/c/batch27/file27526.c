// fichero 27526 -- macros y constantes -- MODIFICADO
#define LIMITE_27526 27726
#define FACTOR_27526 3

int aplicar_limite27526(int valor) {
    if (valor > LIMITE_27526) return LIMITE_27526;
    return valor * FACTOR_27526;
}
