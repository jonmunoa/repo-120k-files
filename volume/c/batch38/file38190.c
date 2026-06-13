// fichero 38190 -- macros y constantes
#define LIMITE_38190 38290
#define FACTOR_38190 1

int aplicar_limite38190(int valor) {
    if (valor > LIMITE_38190) return LIMITE_38190;
    return valor * FACTOR_38190;
}
