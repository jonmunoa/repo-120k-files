// fichero 33186 -- macros y constantes -- MODIFICADO
#define LIMITE_33186 33386
#define FACTOR_33186 3

int aplicar_limite33186(int valor) {
    if (valor > LIMITE_33186) return LIMITE_33186;
    return valor * FACTOR_33186;
}
