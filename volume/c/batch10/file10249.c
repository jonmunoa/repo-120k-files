// fichero 10249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10249;

Registro10249 crear_registro10249(int id) {
    Registro10249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
