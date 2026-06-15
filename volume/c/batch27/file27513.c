// fichero 27513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27513;

Registro27513 crear_registro27513(int id) {
    Registro27513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
