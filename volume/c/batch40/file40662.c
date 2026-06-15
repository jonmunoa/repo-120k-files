// fichero 40662 -- macros y constantes -- MODIFICADO
#define LIMITE_40662 40862
#define FACTOR_40662 4

int aplicar_limite40662(int valor) {
    if (valor > LIMITE_40662) return LIMITE_40662;
    return valor * FACTOR_40662;
}
