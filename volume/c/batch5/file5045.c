// fichero 5045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5045;

Registro5045 crear_registro5045(int id) {
    Registro5045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
