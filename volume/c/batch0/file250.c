// fichero 250 -- macros y constantes -- MODIFICADO
#define LIMITE_250 450
#define FACTOR_250 2

int aplicar_limite250(int valor) {
    if (valor > LIMITE_250) return LIMITE_250;
    return valor * FACTOR_250;
}
