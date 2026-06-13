// fichero 7742 -- macros y constantes
#define LIMITE_7742 7842
#define FACTOR_7742 3

int aplicar_limite7742(int valor) {
    if (valor > LIMITE_7742) return LIMITE_7742;
    return valor * FACTOR_7742;
}
