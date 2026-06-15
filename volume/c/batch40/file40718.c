// fichero 40718 -- macros y constantes -- MODIFICADO
#define LIMITE_40718 40918
#define FACTOR_40718 5

int aplicar_limite40718(int valor) {
    if (valor > LIMITE_40718) return LIMITE_40718;
    return valor * FACTOR_40718;
}
