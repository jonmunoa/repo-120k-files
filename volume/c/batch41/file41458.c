// fichero 41458 -- macros y constantes -- MODIFICADO
#define LIMITE_41458 41658
#define FACTOR_41458 5

int aplicar_limite41458(int valor) {
    if (valor > LIMITE_41458) return LIMITE_41458;
    return valor * FACTOR_41458;
}
