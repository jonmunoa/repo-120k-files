// fichero 19046 -- macros y constantes
#define LIMITE_19046 19146
#define FACTOR_19046 2

int aplicar_limite19046(int valor) {
    if (valor > LIMITE_19046) return LIMITE_19046;
    return valor * FACTOR_19046;
}
