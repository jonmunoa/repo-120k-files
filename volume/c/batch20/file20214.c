// fichero 20214 -- macros y constantes
#define LIMITE_20214 20314
#define FACTOR_20214 5

int aplicar_limite20214(int valor) {
    if (valor > LIMITE_20214) return LIMITE_20214;
    return valor * FACTOR_20214;
}
