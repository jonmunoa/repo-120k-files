// fichero 31358 -- macros y constantes -- MODIFICADO
#define LIMITE_31358 31558
#define FACTOR_31358 5

int aplicar_limite31358(int valor) {
    if (valor > LIMITE_31358) return LIMITE_31358;
    return valor * FACTOR_31358;
}
