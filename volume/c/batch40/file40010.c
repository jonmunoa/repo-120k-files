// fichero 40010 -- macros y constantes -- MODIFICADO
#define LIMITE_40010 40210
#define FACTOR_40010 2

int aplicar_limite40010(int valor) {
    if (valor > LIMITE_40010) return LIMITE_40010;
    return valor * FACTOR_40010;
}
