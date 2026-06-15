// fichero 40730 -- macros y constantes -- MODIFICADO
#define LIMITE_40730 40930
#define FACTOR_40730 2

int aplicar_limite40730(int valor) {
    if (valor > LIMITE_40730) return LIMITE_40730;
    return valor * FACTOR_40730;
}
