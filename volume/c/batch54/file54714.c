// fichero 54714 -- macros y constantes
#define LIMITE_54714 54814
#define FACTOR_54714 5

int aplicar_limite54714(int valor) {
    if (valor > LIMITE_54714) return LIMITE_54714;
    return valor * FACTOR_54714;
}
