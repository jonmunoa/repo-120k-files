// fichero 29578 -- macros y constantes -- MODIFICADO
#define LIMITE_29578 29778
#define FACTOR_29578 5

int aplicar_limite29578(int valor) {
    if (valor > LIMITE_29578) return LIMITE_29578;
    return valor * FACTOR_29578;
}
