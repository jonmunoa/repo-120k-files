// fichero 45293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45293;

Registro45293 crear_registro45293(int id) {
    Registro45293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
