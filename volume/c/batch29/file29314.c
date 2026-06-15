// fichero 29314 -- macros y constantes -- MODIFICADO
#define LIMITE_29314 29514
#define FACTOR_29314 6

int aplicar_limite29314(int valor) {
    if (valor > LIMITE_29314) return LIMITE_29314;
    return valor * FACTOR_29314;
}
