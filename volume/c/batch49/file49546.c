// fichero 49546 -- macros y constantes -- MODIFICADO
#define LIMITE_49546 49746
#define FACTOR_49546 3

int aplicar_limite49546(int valor) {
    if (valor > LIMITE_49546) return LIMITE_49546;
    return valor * FACTOR_49546;
}
