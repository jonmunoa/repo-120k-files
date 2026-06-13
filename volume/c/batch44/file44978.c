// fichero 44978 -- macros y constantes
#define LIMITE_44978 45078
#define FACTOR_44978 4

int aplicar_limite44978(int valor) {
    if (valor > LIMITE_44978) return LIMITE_44978;
    return valor * FACTOR_44978;
}
