// fichero 47781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47781;

Registro47781 crear_registro47781(int id) {
    Registro47781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47781(Registro47781 r) {
    return r.valor + r.id;
}
