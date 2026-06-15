// fichero 33210 -- macros y constantes -- MODIFICADO
#define LIMITE_33210 33410
#define FACTOR_33210 2

int aplicar_limite33210(int valor) {
    if (valor > LIMITE_33210) return LIMITE_33210;
    return valor * FACTOR_33210;
}
