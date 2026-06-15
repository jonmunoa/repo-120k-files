// fichero 1845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1845;

Registro1845 crear_registro1845(int id) {
    Registro1845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
