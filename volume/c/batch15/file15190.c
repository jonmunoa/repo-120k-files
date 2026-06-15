// fichero 15190 -- macros y constantes -- MODIFICADO
#define LIMITE_15190 15390
#define FACTOR_15190 2

int aplicar_limite15190(int valor) {
    if (valor > LIMITE_15190) return LIMITE_15190;
    return valor * FACTOR_15190;
}
