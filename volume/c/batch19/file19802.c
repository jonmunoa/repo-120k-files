// fichero 19802 -- macros y constantes -- MODIFICADO
#define LIMITE_19802 20002
#define FACTOR_19802 4

int aplicar_limite19802(int valor) {
    if (valor > LIMITE_19802) return LIMITE_19802;
    return valor * FACTOR_19802;
}
