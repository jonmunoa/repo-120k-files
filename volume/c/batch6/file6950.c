// fichero 6950 -- macros y constantes
#define LIMITE_6950 7050
#define FACTOR_6950 1

int aplicar_limite6950(int valor) {
    if (valor > LIMITE_6950) return LIMITE_6950;
    return valor * FACTOR_6950;
}
