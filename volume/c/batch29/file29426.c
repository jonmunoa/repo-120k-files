// fichero 29426 -- macros y constantes -- MODIFICADO
#define LIMITE_29426 29626
#define FACTOR_29426 3

int aplicar_limite29426(int valor) {
    if (valor > LIMITE_29426) return LIMITE_29426;
    return valor * FACTOR_29426;
}
