// fichero 40718 -- macros y constantes
#define LIMITE_40718 40818
#define FACTOR_40718 4

int aplicar_limite40718(int valor) {
    if (valor > LIMITE_40718) return LIMITE_40718;
    return valor * FACTOR_40718;
}
