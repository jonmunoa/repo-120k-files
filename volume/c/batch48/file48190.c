// fichero 48190 -- macros y constantes
#define LIMITE_48190 48290
#define FACTOR_48190 1

int aplicar_limite48190(int valor) {
    if (valor > LIMITE_48190) return LIMITE_48190;
    return valor * FACTOR_48190;
}
