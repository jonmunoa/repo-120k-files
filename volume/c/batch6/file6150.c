// fichero 6150 -- macros y constantes -- MODIFICADO
#define LIMITE_6150 6350
#define FACTOR_6150 2

int aplicar_limite6150(int valor) {
    if (valor > LIMITE_6150) return LIMITE_6150;
    return valor * FACTOR_6150;
}
