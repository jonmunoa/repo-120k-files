// fichero 25062 -- macros y constantes -- MODIFICADO
#define LIMITE_25062 25262
#define FACTOR_25062 4

int aplicar_limite25062(int valor) {
    if (valor > LIMITE_25062) return LIMITE_25062;
    return valor * FACTOR_25062;
}
