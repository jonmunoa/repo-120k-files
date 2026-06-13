// fichero 38274 -- macros y constantes
#define LIMITE_38274 38374
#define FACTOR_38274 5

int aplicar_limite38274(int valor) {
    if (valor > LIMITE_38274) return LIMITE_38274;
    return valor * FACTOR_38274;
}
