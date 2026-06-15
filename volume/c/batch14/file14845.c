// fichero 14845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14845;

Registro14845 crear_registro14845(int id) {
    Registro14845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
