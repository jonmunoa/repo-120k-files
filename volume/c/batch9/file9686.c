// fichero 9686 -- macros y constantes -- MODIFICADO
#define LIMITE_9686 9886
#define FACTOR_9686 3

int aplicar_limite9686(int valor) {
    if (valor > LIMITE_9686) return LIMITE_9686;
    return valor * FACTOR_9686;
}
