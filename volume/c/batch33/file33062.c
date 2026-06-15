// fichero 33062 -- macros y constantes -- MODIFICADO
#define LIMITE_33062 33262
#define FACTOR_33062 4

int aplicar_limite33062(int valor) {
    if (valor > LIMITE_33062) return LIMITE_33062;
    return valor * FACTOR_33062;
}
