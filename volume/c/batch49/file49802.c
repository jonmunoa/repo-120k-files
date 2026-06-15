// fichero 49802 -- macros y constantes -- MODIFICADO
#define LIMITE_49802 50002
#define FACTOR_49802 4

int aplicar_limite49802(int valor) {
    if (valor > LIMITE_49802) return LIMITE_49802;
    return valor * FACTOR_49802;
}
