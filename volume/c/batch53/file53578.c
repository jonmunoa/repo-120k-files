// fichero 53578 -- macros y constantes
#define LIMITE_53578 53678
#define FACTOR_53578 4

int aplicar_limite53578(int valor) {
    if (valor > LIMITE_53578) return LIMITE_53578;
    return valor * FACTOR_53578;
}
