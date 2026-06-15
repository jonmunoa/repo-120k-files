// fichero 27730 -- macros y constantes -- MODIFICADO
#define LIMITE_27730 27930
#define FACTOR_27730 2

int aplicar_limite27730(int valor) {
    if (valor > LIMITE_27730) return LIMITE_27730;
    return valor * FACTOR_27730;
}
