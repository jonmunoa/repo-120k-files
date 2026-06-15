// fichero 14829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14829;

Registro14829 crear_registro14829(int id) {
    Registro14829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
