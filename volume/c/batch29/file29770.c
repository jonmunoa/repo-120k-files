// fichero 29770 -- macros y constantes -- MODIFICADO
#define LIMITE_29770 29970
#define FACTOR_29770 2

int aplicar_limite29770(int valor) {
    if (valor > LIMITE_29770) return LIMITE_29770;
    return valor * FACTOR_29770;
}
