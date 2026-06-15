// fichero 36157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36157;

Registro36157 crear_registro36157(int id) {
    Registro36157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
