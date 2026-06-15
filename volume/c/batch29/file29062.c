// fichero 29062 -- macros y constantes -- MODIFICADO
#define LIMITE_29062 29262
#define FACTOR_29062 4

int aplicar_limite29062(int valor) {
    if (valor > LIMITE_29062) return LIMITE_29062;
    return valor * FACTOR_29062;
}
