// fichero 19654 -- macros y constantes -- MODIFICADO
#define LIMITE_19654 19854
#define FACTOR_19654 6

int aplicar_limite19654(int valor) {
    if (valor > LIMITE_19654) return LIMITE_19654;
    return valor * FACTOR_19654;
}
