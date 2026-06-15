// fichero 33090 -- macros y constantes -- MODIFICADO
#define LIMITE_33090 33290
#define FACTOR_33090 2

int aplicar_limite33090(int valor) {
    if (valor > LIMITE_33090) return LIMITE_33090;
    return valor * FACTOR_33090;
}
