// fichero 40502 -- macros y constantes -- MODIFICADO
#define LIMITE_40502 40702
#define FACTOR_40502 4

int aplicar_limite40502(int valor) {
    if (valor > LIMITE_40502) return LIMITE_40502;
    return valor * FACTOR_40502;
}
