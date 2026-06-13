// fichero 52781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52781;

Registro52781 crear_registro52781(int id) {
    Registro52781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52781(Registro52781 r) {
    return r.valor + r.id;
}
