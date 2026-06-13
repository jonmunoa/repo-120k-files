// fichero 44190 -- macros y constantes
#define LIMITE_44190 44290
#define FACTOR_44190 1

int aplicar_limite44190(int valor) {
    if (valor > LIMITE_44190) return LIMITE_44190;
    return valor * FACTOR_44190;
}
