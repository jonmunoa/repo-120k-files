// fichero 10049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10049;

Registro10049 crear_registro10049(int id) {
    Registro10049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
