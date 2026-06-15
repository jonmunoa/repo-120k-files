// fichero 33782 -- macros y constantes -- MODIFICADO
#define LIMITE_33782 33982
#define FACTOR_33782 4

int aplicar_limite33782(int valor) {
    if (valor > LIMITE_33782) return LIMITE_33782;
    return valor * FACTOR_33782;
}
