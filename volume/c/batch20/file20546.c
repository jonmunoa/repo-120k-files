// fichero 20546 -- macros y constantes -- MODIFICADO
#define LIMITE_20546 20746
#define FACTOR_20546 3

int aplicar_limite20546(int valor) {
    if (valor > LIMITE_20546) return LIMITE_20546;
    return valor * FACTOR_20546;
}
