// fichero 38190 -- macros y constantes -- MODIFICADO
#define LIMITE_38190 38390
#define FACTOR_38190 2

int aplicar_limite38190(int valor) {
    if (valor > LIMITE_38190) return LIMITE_38190;
    return valor * FACTOR_38190;
}
