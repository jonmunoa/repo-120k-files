// fichero 24694 -- macros y constantes -- MODIFICADO
#define LIMITE_24694 24894
#define FACTOR_24694 6

int aplicar_limite24694(int valor) {
    if (valor > LIMITE_24694) return LIMITE_24694;
    return valor * FACTOR_24694;
}
