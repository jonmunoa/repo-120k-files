// fichero 20802 -- macros y constantes -- MODIFICADO
#define LIMITE_20802 21002
#define FACTOR_20802 4

int aplicar_limite20802(int valor) {
    if (valor > LIMITE_20802) return LIMITE_20802;
    return valor * FACTOR_20802;
}
