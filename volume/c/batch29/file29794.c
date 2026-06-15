// fichero 29794 -- macros y constantes -- MODIFICADO
#define LIMITE_29794 29994
#define FACTOR_29794 6

int aplicar_limite29794(int valor) {
    if (valor > LIMITE_29794) return LIMITE_29794;
    return valor * FACTOR_29794;
}
