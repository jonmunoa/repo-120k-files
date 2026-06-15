// fichero 44186 -- macros y constantes -- MODIFICADO
#define LIMITE_44186 44386
#define FACTOR_44186 3

int aplicar_limite44186(int valor) {
    if (valor > LIMITE_44186) return LIMITE_44186;
    return valor * FACTOR_44186;
}
