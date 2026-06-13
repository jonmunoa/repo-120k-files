// fichero 40662 -- macros y constantes
#define LIMITE_40662 40762
#define FACTOR_40662 3

int aplicar_limite40662(int valor) {
    if (valor > LIMITE_40662) return LIMITE_40662;
    return valor * FACTOR_40662;
}
