// fichero 31578 -- macros y constantes -- MODIFICADO
#define LIMITE_31578 31778
#define FACTOR_31578 5

int aplicar_limite31578(int valor) {
    if (valor > LIMITE_31578) return LIMITE_31578;
    return valor * FACTOR_31578;
}
