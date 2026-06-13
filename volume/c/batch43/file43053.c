// fichero 43053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43053;

Registro43053 crear_registro43053(int id) {
    Registro43053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43053(Registro43053 r) {
    return r.valor + r.id;
}
