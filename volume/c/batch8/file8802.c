// fichero 8802 -- macros y constantes -- MODIFICADO
#define LIMITE_8802 9002
#define FACTOR_8802 4

int aplicar_limite8802(int valor) {
    if (valor > LIMITE_8802) return LIMITE_8802;
    return valor * FACTOR_8802;
}
