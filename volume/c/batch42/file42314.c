// fichero 42314 -- macros y constantes -- MODIFICADO
#define LIMITE_42314 42514
#define FACTOR_42314 6

int aplicar_limite42314(int valor) {
    if (valor > LIMITE_42314) return LIMITE_42314;
    return valor * FACTOR_42314;
}
