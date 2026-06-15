// fichero 24186 -- macros y constantes -- MODIFICADO
#define LIMITE_24186 24386
#define FACTOR_24186 3

int aplicar_limite24186(int valor) {
    if (valor > LIMITE_24186) return LIMITE_24186;
    return valor * FACTOR_24186;
}
