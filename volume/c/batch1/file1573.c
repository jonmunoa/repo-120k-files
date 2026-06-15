// fichero 1573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1573;

Registro1573 crear_registro1573(int id) {
    Registro1573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
