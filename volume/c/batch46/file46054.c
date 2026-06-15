// fichero 46054 -- macros y constantes -- MODIFICADO
#define LIMITE_46054 46254
#define FACTOR_46054 6

int aplicar_limite46054(int valor) {
    if (valor > LIMITE_46054) return LIMITE_46054;
    return valor * FACTOR_46054;
}
