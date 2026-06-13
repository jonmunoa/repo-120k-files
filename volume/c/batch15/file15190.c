// fichero 15190 -- macros y constantes
#define LIMITE_15190 15290
#define FACTOR_15190 1

int aplicar_limite15190(int valor) {
    if (valor > LIMITE_15190) return LIMITE_15190;
    return valor * FACTOR_15190;
}
