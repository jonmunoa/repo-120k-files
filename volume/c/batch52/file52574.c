// fichero 52574 -- macros y constantes
#define LIMITE_52574 52674
#define FACTOR_52574 5

int aplicar_limite52574(int valor) {
    if (valor > LIMITE_52574) return LIMITE_52574;
    return valor * FACTOR_52574;
}
