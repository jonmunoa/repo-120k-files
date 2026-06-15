// fichero 6450 -- macros y constantes -- MODIFICADO
#define LIMITE_6450 6650
#define FACTOR_6450 2

int aplicar_limite6450(int valor) {
    if (valor > LIMITE_6450) return LIMITE_6450;
    return valor * FACTOR_6450;
}
