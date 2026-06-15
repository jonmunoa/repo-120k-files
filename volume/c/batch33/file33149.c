// fichero 33149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33149;

Registro33149 crear_registro33149(int id) {
    Registro33149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
