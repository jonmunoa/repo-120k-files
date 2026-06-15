// fichero 6250 -- macros y constantes -- MODIFICADO
#define LIMITE_6250 6450
#define FACTOR_6250 2

int aplicar_limite6250(int valor) {
    if (valor > LIMITE_6250) return LIMITE_6250;
    return valor * FACTOR_6250;
}
