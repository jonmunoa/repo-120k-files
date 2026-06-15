// fichero 34325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34325;

Registro34325 crear_registro34325(int id) {
    Registro34325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
