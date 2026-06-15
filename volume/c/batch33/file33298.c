// fichero 33298 -- macros y constantes -- MODIFICADO
#define LIMITE_33298 33498
#define FACTOR_33298 5

int aplicar_limite33298(int valor) {
    if (valor > LIMITE_33298) return LIMITE_33298;
    return valor * FACTOR_33298;
}
