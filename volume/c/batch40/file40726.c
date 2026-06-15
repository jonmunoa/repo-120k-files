// fichero 40726 -- macros y constantes -- MODIFICADO
#define LIMITE_40726 40926
#define FACTOR_40726 3

int aplicar_limite40726(int valor) {
    if (valor > LIMITE_40726) return LIMITE_40726;
    return valor * FACTOR_40726;
}
