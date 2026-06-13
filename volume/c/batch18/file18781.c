// fichero 18781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18781;

Registro18781 crear_registro18781(int id) {
    Registro18781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18781(Registro18781 r) {
    return r.valor + r.id;
}
