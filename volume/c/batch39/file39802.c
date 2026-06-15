// fichero 39802 -- macros y constantes -- MODIFICADO
#define LIMITE_39802 40002
#define FACTOR_39802 4

int aplicar_limite39802(int valor) {
    if (valor > LIMITE_39802) return LIMITE_39802;
    return valor * FACTOR_39802;
}
