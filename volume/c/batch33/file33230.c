// fichero 33230 -- macros y constantes -- MODIFICADO
#define LIMITE_33230 33430
#define FACTOR_33230 2

int aplicar_limite33230(int valor) {
    if (valor > LIMITE_33230) return LIMITE_33230;
    return valor * FACTOR_33230;
}
