// fichero 47802 -- macros y constantes -- MODIFICADO
#define LIMITE_47802 48002
#define FACTOR_47802 4

int aplicar_limite47802(int valor) {
    if (valor > LIMITE_47802) return LIMITE_47802;
    return valor * FACTOR_47802;
}
