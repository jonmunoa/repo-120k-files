// fichero 10689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10689;

Registro10689 crear_registro10689(int id) {
    Registro10689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
