// fichero 16846 -- macros y constantes -- MODIFICADO
#define LIMITE_16846 17046
#define FACTOR_16846 3

int aplicar_limite16846(int valor) {
    if (valor > LIMITE_16846) return LIMITE_16846;
    return valor * FACTOR_16846;
}
