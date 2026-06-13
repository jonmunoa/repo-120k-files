// fichero 15878 -- macros y constantes
#define LIMITE_15878 15978
#define FACTOR_15878 4

int aplicar_limite15878(int valor) {
    if (valor > LIMITE_15878) return LIMITE_15878;
    return valor * FACTOR_15878;
}
