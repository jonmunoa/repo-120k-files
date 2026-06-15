// fichero 48578 -- macros y constantes -- MODIFICADO
#define LIMITE_48578 48778
#define FACTOR_48578 5

int aplicar_limite48578(int valor) {
    if (valor > LIMITE_48578) return LIMITE_48578;
    return valor * FACTOR_48578;
}
