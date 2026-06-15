// fichero 10713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10713;

Registro10713 crear_registro10713(int id) {
    Registro10713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
