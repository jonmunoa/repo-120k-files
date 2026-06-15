// fichero 29622 -- macros y constantes -- MODIFICADO
#define LIMITE_29622 29822
#define FACTOR_29622 4

int aplicar_limite29622(int valor) {
    if (valor > LIMITE_29622) return LIMITE_29622;
    return valor * FACTOR_29622;
}
