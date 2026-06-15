// fichero 25078 -- macros y constantes -- MODIFICADO
#define LIMITE_25078 25278
#define FACTOR_25078 5

int aplicar_limite25078(int valor) {
    if (valor > LIMITE_25078) return LIMITE_25078;
    return valor * FACTOR_25078;
}
