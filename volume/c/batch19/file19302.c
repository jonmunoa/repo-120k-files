// fichero 19302 -- macros y constantes -- MODIFICADO
#define LIMITE_19302 19502
#define FACTOR_19302 4

int aplicar_limite19302(int valor) {
    if (valor > LIMITE_19302) return LIMITE_19302;
    return valor * FACTOR_19302;
}
