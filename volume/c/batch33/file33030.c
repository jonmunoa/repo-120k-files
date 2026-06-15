// fichero 33030 -- macros y constantes -- MODIFICADO
#define LIMITE_33030 33230
#define FACTOR_33030 2

int aplicar_limite33030(int valor) {
    if (valor > LIMITE_33030) return LIMITE_33030;
    return valor * FACTOR_33030;
}
