// fichero 41622 -- macros y constantes -- MODIFICADO
#define LIMITE_41622 41822
#define FACTOR_41622 4

int aplicar_limite41622(int valor) {
    if (valor > LIMITE_41622) return LIMITE_41622;
    return valor * FACTOR_41622;
}
