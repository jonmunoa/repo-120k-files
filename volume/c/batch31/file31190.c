// fichero 31190 -- macros y constantes
#define LIMITE_31190 31290
#define FACTOR_31190 1

int aplicar_limite31190(int valor) {
    if (valor > LIMITE_31190) return LIMITE_31190;
    return valor * FACTOR_31190;
}
