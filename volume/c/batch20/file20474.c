// fichero 20474 -- macros y constantes -- MODIFICADO
#define LIMITE_20474 20674
#define FACTOR_20474 6

int aplicar_limite20474(int valor) {
    if (valor > LIMITE_20474) return LIMITE_20474;
    return valor * FACTOR_20474;
}
