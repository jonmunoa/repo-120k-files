// fichero 5670 -- macros y constantes -- MODIFICADO
#define LIMITE_5670 5870
#define FACTOR_5670 2

int aplicar_limite5670(int valor) {
    if (valor > LIMITE_5670) return LIMITE_5670;
    return valor * FACTOR_5670;
}
