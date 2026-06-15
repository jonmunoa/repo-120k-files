// fichero 16154 -- macros y constantes -- MODIFICADO
#define LIMITE_16154 16354
#define FACTOR_16154 6

int aplicar_limite16154(int valor) {
    if (valor > LIMITE_16154) return LIMITE_16154;
    return valor * FACTOR_16154;
}
