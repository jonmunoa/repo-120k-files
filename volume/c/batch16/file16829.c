// fichero 16829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16829;

Registro16829 crear_registro16829(int id) {
    Registro16829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
