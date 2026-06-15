// fichero 23762 -- macros y constantes -- MODIFICADO
#define LIMITE_23762 23962
#define FACTOR_23762 4

int aplicar_limite23762(int valor) {
    if (valor > LIMITE_23762) return LIMITE_23762;
    return valor * FACTOR_23762;
}
