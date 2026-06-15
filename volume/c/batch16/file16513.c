// fichero 16513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16513;

Registro16513 crear_registro16513(int id) {
    Registro16513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
