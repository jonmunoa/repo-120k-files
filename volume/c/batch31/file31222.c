// fichero 31222 -- macros y constantes -- MODIFICADO
#define LIMITE_31222 31422
#define FACTOR_31222 4

int aplicar_limite31222(int valor) {
    if (valor > LIMITE_31222) return LIMITE_31222;
    return valor * FACTOR_31222;
}
