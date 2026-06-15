// fichero 40002 -- macros y constantes -- MODIFICADO
#define LIMITE_40002 40202
#define FACTOR_40002 4

int aplicar_limite40002(int valor) {
    if (valor > LIMITE_40002) return LIMITE_40002;
    return valor * FACTOR_40002;
}
