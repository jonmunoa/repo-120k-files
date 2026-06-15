// fichero 44194 -- macros y constantes -- MODIFICADO
#define LIMITE_44194 44394
#define FACTOR_44194 6

int aplicar_limite44194(int valor) {
    if (valor > LIMITE_44194) return LIMITE_44194;
    return valor * FACTOR_44194;
}
