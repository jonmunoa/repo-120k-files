// fichero 45953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45953;

Registro45953 crear_registro45953(int id) {
    Registro45953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
