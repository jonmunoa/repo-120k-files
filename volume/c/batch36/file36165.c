// fichero 36165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36165;

Registro36165 crear_registro36165(int id) {
    Registro36165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
