// fichero 48730 -- macros y constantes -- MODIFICADO
#define LIMITE_48730 48930
#define FACTOR_48730 2

int aplicar_limite48730(int valor) {
    if (valor > LIMITE_48730) return LIMITE_48730;
    return valor * FACTOR_48730;
}
