// fichero 48950 -- macros y constantes
#define LIMITE_48950 49050
#define FACTOR_48950 1

int aplicar_limite48950(int valor) {
    if (valor > LIMITE_48950) return LIMITE_48950;
    return valor * FACTOR_48950;
}
