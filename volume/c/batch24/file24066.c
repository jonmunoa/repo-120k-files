// fichero 24066 -- macros y constantes -- MODIFICADO
#define LIMITE_24066 24266
#define FACTOR_24066 3

int aplicar_limite24066(int valor) {
    if (valor > LIMITE_24066) return LIMITE_24066;
    return valor * FACTOR_24066;
}
