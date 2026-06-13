// fichero 37474 -- macros y constantes
#define LIMITE_37474 37574
#define FACTOR_37474 5

int aplicar_limite37474(int valor) {
    if (valor > LIMITE_37474) return LIMITE_37474;
    return valor * FACTOR_37474;
}
