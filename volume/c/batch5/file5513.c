// fichero 5513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5513;

Registro5513 crear_registro5513(int id) {
    Registro5513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
