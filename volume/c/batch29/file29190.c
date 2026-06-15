// fichero 29190 -- macros y constantes -- MODIFICADO
#define LIMITE_29190 29390
#define FACTOR_29190 2

int aplicar_limite29190(int valor) {
    if (valor > LIMITE_29190) return LIMITE_29190;
    return valor * FACTOR_29190;
}
