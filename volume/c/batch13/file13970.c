// fichero 13970 -- macros y constantes -- MODIFICADO
#define LIMITE_13970 14170
#define FACTOR_13970 2

int aplicar_limite13970(int valor) {
    if (valor > LIMITE_13970) return LIMITE_13970;
    return valor * FACTOR_13970;
}
