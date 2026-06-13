// fichero 37950 -- macros y constantes
#define LIMITE_37950 38050
#define FACTOR_37950 1

int aplicar_limite37950(int valor) {
    if (valor > LIMITE_37950) return LIMITE_37950;
    return valor * FACTOR_37950;
}
