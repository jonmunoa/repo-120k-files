// fichero 6181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6181;

Registro6181 crear_registro6181(int id) {
    Registro6181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6181(Registro6181 r) {
    return r.valor + r.id;
}
