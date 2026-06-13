// fichero 40190 -- macros y constantes
#define LIMITE_40190 40290
#define FACTOR_40190 1

int aplicar_limite40190(int valor) {
    if (valor > LIMITE_40190) return LIMITE_40190;
    return valor * FACTOR_40190;
}
