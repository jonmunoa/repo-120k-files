// fichero 52085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52085;

Registro52085 crear_registro52085(int id) {
    Registro52085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52085(Registro52085 r) {
    return r.valor + r.id;
}
