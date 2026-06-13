// fichero 49046 -- macros y constantes
#define LIMITE_49046 49146
#define FACTOR_49046 2

int aplicar_limite49046(int valor) {
    if (valor > LIMITE_49046) return LIMITE_49046;
    return valor * FACTOR_49046;
}
