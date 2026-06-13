// fichero 21078 -- macros y constantes
#define LIMITE_21078 21178
#define FACTOR_21078 4

int aplicar_limite21078(int valor) {
    if (valor > LIMITE_21078) return LIMITE_21078;
    return valor * FACTOR_21078;
}
