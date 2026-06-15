// fichero 21078 -- macros y constantes -- MODIFICADO
#define LIMITE_21078 21278
#define FACTOR_21078 5

int aplicar_limite21078(int valor) {
    if (valor > LIMITE_21078) return LIMITE_21078;
    return valor * FACTOR_21078;
}
