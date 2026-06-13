// fichero 40781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40781;

Registro40781 crear_registro40781(int id) {
    Registro40781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40781(Registro40781 r) {
    return r.valor + r.id;
}
