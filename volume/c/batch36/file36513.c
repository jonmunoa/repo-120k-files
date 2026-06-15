// fichero 36513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36513;

Registro36513 crear_registro36513(int id) {
    Registro36513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
