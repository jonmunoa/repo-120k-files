// fichero 40302 -- macros y constantes -- MODIFICADO
#define LIMITE_40302 40502
#define FACTOR_40302 4

int aplicar_limite40302(int valor) {
    if (valor > LIMITE_40302) return LIMITE_40302;
    return valor * FACTOR_40302;
}
