// fichero 33358 -- macros y constantes -- MODIFICADO
#define LIMITE_33358 33558
#define FACTOR_33358 5

int aplicar_limite33358(int valor) {
    if (valor > LIMITE_33358) return LIMITE_33358;
    return valor * FACTOR_33358;
}
