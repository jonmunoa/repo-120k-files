// fichero 16913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16913;

Registro16913 crear_registro16913(int id) {
    Registro16913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16913(Registro16913 r) {
    return r.valor + r.id;
}
