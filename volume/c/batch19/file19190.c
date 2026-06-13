// fichero 19190 -- macros y constantes
#define LIMITE_19190 19290
#define FACTOR_19190 1

int aplicar_limite19190(int valor) {
    if (valor > LIMITE_19190) return LIMITE_19190;
    return valor * FACTOR_19190;
}
