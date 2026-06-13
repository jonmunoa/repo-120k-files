// fichero 33782 -- macros y constantes
#define LIMITE_33782 33882
#define FACTOR_33782 3

int aplicar_limite33782(int valor) {
    if (valor > LIMITE_33782) return LIMITE_33782;
    return valor * FACTOR_33782;
}
