// fichero 47578 -- macros y constantes -- MODIFICADO
#define LIMITE_47578 47778
#define FACTOR_47578 5

int aplicar_limite47578(int valor) {
    if (valor > LIMITE_47578) return LIMITE_47578;
    return valor * FACTOR_47578;
}
